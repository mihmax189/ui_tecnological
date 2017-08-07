#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "external_rlmc_fv_proto.gen.cw.hpp"
#include "tablemodel.h"
#include <QMainWindow>
#include <QPalette>
#include <QPushButton>
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

  StrobeLengthWriteModel *strobeLengthWriteModel;
  StrobeLengthReadModel *strobeLengthReadModel;

  QUdpSocket sendSocket;
  QUdpSocket readSocket;
  void marshalAndSend(Codograms::Codogram &cdg, const QString &addr,
                      quint16 port);
  QPalette regPal;
  void getDataForModel(quint16 *strobe_length, int regime);
  void setButtonToStateProcess(QPushButton *bt);
  void setButtonsToRegularMode();

private slots:
  void sendButtonSlot(bool);
  void readButtonSlot(bool);
  void fireButtonSlot(bool);
  void processReadData();
  void setItemsForNumberFragmentComboBox(int);

public slots:
  void sendEndSession();
};

#endif // MAINWINDOW_H
