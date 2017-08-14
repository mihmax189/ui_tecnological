#ifndef TABLEMODEL_H
#define TABLEMODEL_H

#include <QAbstractTableModel>
#include <QTableView>

const int strobs = 14;
const int regims = 24;

// Модель данных для засылки расстановок
class StrobeLengthWriteModel : public QAbstractTableModel {
private:
  int _rows;
  int _cols;

  quint16 _data[regims][strobs];
  bool _flags[regims][strobs];

public:
  StrobeLengthWriteModel(QObject *parent);
  QVariant data(const QModelIndex &, int) const;
  int rowCount(const QModelIndex &) const;
  int columnCount(const QModelIndex &) const;
  bool setData(const QModelIndex &index, const QVariant &value, int role);
  Qt::ItemFlags flags(const QModelIndex &) const;
  QVariant headerData(int section, Qt::Orientation orientation,
                      int role = Qt::DisplayRole) const;
  void getModelData(quint16 (*data)[strobs]);
  void setModelData(quint16 (*data)[strobs]);
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
