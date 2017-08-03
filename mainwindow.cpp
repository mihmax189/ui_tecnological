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
    qCritical("recvSocket bind error!");

  connect(&readSocket, SIGNAL(readyRead()), this, SLOT(processReadData()));

  connect(ui->sendButton, SIGNAL(clicked(bool)), this,
          SLOT(sendButtonSlot(bool)));
  connect(ui->readButton, SIGNAL(clicked(bool)), this,
          SLOT(readButtonSlot(bool)));
  connect(ui->fireButton, SIGNAL(clicked(bool)), this,
          SLOT(fireButtonSlot(bool)));

  // посылка кодограммы на сервер о начале работы сеанса прожига расстановок
  Codograms::session_regimes_and_strobes buff;
  buff.m.state = session_regimes_and_strobes__begin;
  marshalAndSend(buff, "193.1.1.64", 7251);

  regPal = ui->sendButton->palette();
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::marshalAndSend(Codograms::Codogram &cdg, const QString &addr,
                                quint16 port) {
  cdg.marshal();
  if (sendSocket.writeDatagram(cdg.getBuf(), QHostAddress(addr), port) == -1)
    qCritical("writeDatagram");
}

void MainWindow::sendButtonSlot(bool) {
  quint16 data[regims][strobs];
  strobeLengthModel->getModelData(data);

  Codograms::send_regimes_and_strobes_data buff;
  for (int _regime = 0; _regime < regims; ++_regime) {
    for (int _strobe = 0; _strobe < strobs; ++_strobe) {
      buff.m.strobe_length_in_cols[_strobe] = data[_regime][_strobe];
    }
    buff.m.regime = _regime;
    marshalAndSend(buff, "193.1.1.64", 7251);
  }
}

void MainWindow::readButtonSlot(bool) {
  Codograms::regimes_and_strobes_data_request buff;
  // послать запрос на сервер: выдать засланные данные на панель.
  marshalAndSend(buff, "193.1.1.64", 7251);
}

void MainWindow::fireButtonSlot(bool) {
  Codograms::fire_regimes_and_strobes_data buff;
  // послать на сервер команду прожечь модули данными по режимам и стробам
  marshalAndSend(buff, "193.1.1.64", 7251);
  strobeLengthModel->resetFlags();
}

void MainWindow::processReadData() {
  Codograms::read_regimes_and_strobes_data buff;
  Codograms::progress_indicator_process_regimes_and_strobes progress_buff;
  while (readSocket.hasPendingDatagrams()) {
    QByteArray resp(readSocket.pendingDatagramSize(), '\0');
    readSocket.readDatagram(resp.data(), resp.size());

    if (Is_read_regimes_and_strobes_data(resp.data(), resp.size())) {
      buff.buf = resp;
      buff.unmarshal();
      getDataForModel(buff.m.strobe_length_in_cols, buff.m.regime);
    }

    if (Is_progress_indicator_process_regimes_and_strobes(resp.data(),
                                                          resp.size())) {
      progress_buff.buf = resp;
      progress_buff.unmarshal();
      ui->progressBar->setValue(progress_buff.m.progress);

      // блокируем кнопки ui пока сервер выполняет определенный процесс
      // (записи, чтения или прожига)
      // if ()
    }
  }
}

void MainWindow::getDataForModel(quint16 *strobe_length, int regime) {
  static quint16 data[regims][strobs];
  for (int _strobe = 0; _strobe < strobs; ++_strobe)
    data[regime][_strobe] = strobe_length[_strobe];
  if (regime == (regims - 1))
    strobeLengthModel->updateModelData(data);
}

void MainWindow::sendEndSession() {
  // посылка кодограммы на сервер о конце работы сеанса прожига расстановок
  Codograms::session_regimes_and_strobes buff;
  buff.m.state = session_regimes_and_strobes__end;
  marshalAndSend(buff, "193.1.1.64", 7251);
}

void MainWindow::setButtonToStateProcess(QPushButton *bt) {
  /**
   * @brief pal
   * Подсвечиваем синей рамкой кнопку, название которой соответсвует
   * выполняемому процессу.
   * В сервере предусмотрена страховка от включения другого процесса, пока
   * выполняется
   * определенный процесс.
   */
  QPalette pal = bt->palette();
  pal.setColor(QPalette::Window, QColor(Qt::blue));
  bt->setAutoFillBackground(true);
  bt->setPalette(pal);
  bt->update();
}

void MainWindow::setButtonsToRegularMode() {
  ui->sendButton->setPalette(regPal);
  ui->sendButton->update();
  ui->readButton->setPalette(regPal);
  ui->readButton->update();
  ui->fireButton->setPalette(regPal);
  ui->fireButton->update();
}
