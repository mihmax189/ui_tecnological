#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);

  strobeLengthModel = new StrobeLengthModel(this);
  ui->strobeLengthTableView->setModel(strobeLengthModel);
  ui->strobeLengthTableView->horizontalHeader()->setSectionResizeMode(
      QHeaderView::Stretch);
  ui->strobeLengthTableView->verticalHeader()->setSectionResizeMode(
      QHeaderView::Stretch);
}

MainWindow::~MainWindow() { delete ui; }
