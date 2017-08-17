#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "external_rlmc_fv_proto.gen.cw.hpp"
#include "tablemodel.h"
#include <QMainWindow>
#include <QPalette>
#include <QPushButton>
#include <QThread>
#include <QUdpSocket>

namespace Ui {
class MainWindow;
}

class WorkerThread : public QThread {
  Q_OBJECT

public:
  WorkerThread(QObject *parent = 0) : QThread(parent) {}

  ~WorkerThread() {}

  void setFunction(StrobeLengthWriteModel *obj, quint16 (*data)[14]) {
    _obj = obj;
    // работаем с копией данных, т.к. они доступны для основного потока программы
    // и потока WorkerThread
    copy(data);
  }

  void run() {
    qDebug() << "run!";
    _obj->setModelData(_data);
  }

private:
  void copy(quint16 (*data)[14]) {
      for (int row = 0; row < 24; row++)
          for (int col = 0; col < 14; col++)
              _data[row][col] = data[row][col];
  }

  //quint16 (*_data)[14];
  quint16 _data[24][14];
  StrobeLengthWriteModel *_obj;
};

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
  void setItemsForNumberModuleComboBox(int);
  void copyDataButtonSlot(bool);

public slots:
  void sendEndSession();
  void finishWork();
};

#endif // MAINWINDOW_H
