#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);

  strobeLengthModel = new StrobeLengthModel(this);
  ui->strobeLengthTableView->setModel(strobeLengthModel);
  ui->strobeLengthTableView->horizontalHeader()->setSectionResizeMode(
      QHeaderView::Stretch);
  ui->strobeLengthTableView->verticalHeader()->setSectionResizeMode(
      QHeaderView::Stretch);

  if (!readSocket.bind(7252, QUdpSocket::ShareAddress))
    qCritical("recvSocket");

  connect(&readSocket, SIGNAL(readyRead()), this, SLOT(processReadData()));

  connect(ui->sendButton, SIGNAL(clicked(bool)), this,
          SLOT(sendButtonSlot(bool)));
  connect(ui->readButton, SIGNAL(clicked(bool)), this,
          SLOT(readButtonSlot(bool)));
  connect(ui->fireButton, SIGNAL(clicked(bool)), this,
          SLOT(fireButtonSlot(bool)));
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::marshalAndSend(Codograms::Codogram &cdg, const QString &addr,
                                quint16 port) {
  cdg.marshal();
  if (sendSocket.writeDatagram(cdg.getBuf(), QHostAddress(addr), port) == -1)
    qCritical("writeDatagram");
}

void MainWindow::sendButtonSlot(bool) {
  static quint16 data[regims][strobs];
  strobeLengthModel->getModelData(data);

  static Codograms::send_read_regimes_strobe_data buff;
  buff.m.ts = send_read_regimes_strobe_data__send;
  for (int _regime = 0; _regime < regims; ++_regime) {
    for (int _strobe = 0; _strobe < strobs; ++_strobe) {
      buff.m.strobe_length_in_cols[_strobe] = data[_regime][_strobe];
    }
    buff.m.regime = _regime;
    marshalAndSend(buff, "193.1.1.64", 7251);
  }
}

void MainWindow::readButtonSlot(bool) {
  static Codograms::regimes_strobe_request buff;
  // послать запрос на сервер: выдать засланные данные на панель.
  marshalAndSend(buff, "193.1.1.64", 7251);
}

void MainWindow::fireButtonSlot(bool) {
  static Codograms::fire_regimes_strobe buff;
  // послать на сервер команду прожечь модули данными по режимам и стробам
  marshalAndSend(buff, "193.1.1.64", 7251);
}

void MainWindow::processReadData() { static quint16 data[regims][strobs]; }
