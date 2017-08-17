#ifndef TABLEMODEL_H
#define TABLEMODEL_H

#include <QAbstractTableModel>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlTableModel>
#include <QTableView>

const int strobs = 14;
const int regims = 24;

class StrobeLengthWriteModel : public QSqlQueryModel {
  Q_OBJECT
private:
  int _rows;
  int _cols;
  quint16 _data[regims][strobs];

public:
  StrobeLengthWriteModel(QObject *parent = 0);
  ~StrobeLengthWriteModel() { db.close(); }

  Qt::ItemFlags flags(const QModelIndex &index) const;
  bool setData(const QModelIndex &index, const QVariant &value, int role);
  QVariant data(const QModelIndex &index, int role) const;
  int rowCount(const QModelIndex &) const;
  int columnCount(const QModelIndex &) const;
  QVariant headerData(int section, Qt::Orientation orientation, int role) const;

  // взять данные из внутреннего буфера модели для их отправки на сервер
  void getModelData(quint16 (*)[strobs]);
  // получить данные из модели для чтения для копирования их в внутренний буфер
  // модель для записи
  void setModelData(quint16 (*)[strobs]);

private:
  QSqlDatabase db;
  const QString databaseName = "REGIMES_AND_STROBES";
  bool checkDatabase_FileExists();
  // при изменении значения в модели обновить внутренний буфер
  void setDataToBuffer(int row, int col, int val);

  bool connectDatabase();
  void createTable();
  void refresh();

signals:
  void endCopySignal();
  void finished();
};

// Модель данных для чтения расстановок
class StrobeLengthReadModel : public QAbstractTableModel {
private:
  int _rows;
  int _cols;

  quint16 _data[regims][strobs];
  quint16 _dataForCompare[regims][strobs];
  bool _flags[regims][strobs];

  void compareData();

public:
  StrobeLengthReadModel(QObject *parent);
  QVariant data(const QModelIndex &, int) const;
  int rowCount(const QModelIndex &) const;
  int columnCount(const QModelIndex &) const;
  Qt::ItemFlags flags(const QModelIndex &) const;
  QVariant headerData(int section, Qt::Orientation orientation,
                      int role = Qt::DisplayRole) const;
  void updateModelData(quint16 (*data)[strobs]);
  void setModelDataForCompare(quint16 (*data)[strobs]);
  void resetFlags();
  void getModelData(quint16 (*data)[strobs]);
};

#endif // TABLEMODEL_H
