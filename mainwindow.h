#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "external_rlmc_fv_proto.gen.cw.hpp"
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

  QUdpSocket sendSocket;
  QUdpSocket readSocket;
  void marshalAndSend(Codograms::Codogram &cdg, const QString &addr,
                      quint16 port);

private slots:
  void sendButtonSlot(bool);
};

#endif // MAINWINDOW_H
