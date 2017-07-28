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

  connect(ui->sendButton, SIGNAL(clicked(bool)), this,
          SLOT(sendButtonSlot(bool)));
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::sendButtonSlot(bool) {}
