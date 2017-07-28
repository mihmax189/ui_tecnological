#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "tablemodel.h"
#include <QMainWindow>
#include <QUdpSocket>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {
  Q_OBJECT

public:
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();

private:
  Ui::MainWindow *ui;

  StrobeLengthModel *strobeLengthModel;

  QUdpSocket *sendSocket;
  QUdpSocket *readSocket;

private slots:
  void sendButtonSlot(bool);
};

#endif // MAINWINDOW_H
