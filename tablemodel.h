#ifndef TABLEMODEL_H
#define TABLEMODEL_H

#include <QAbstractTableModel>

const int strobs = 14;
const int regims = 25;

class StrobeLengthModel : public QAbstractTableModel {
private:
  int _rows;
  int _cols;

  quint16 _data[regims][strobs];

public:
  StrobeLengthModel(QObject *parent);
  QVariant data(const QModelIndex &, int) const;
  int rowCount(const QModelIndex &) const;
  int columnCount(const QModelIndex &) const;
  Qt::ItemFlags flags(const QModelIndex &) const;
  QVariant headerData(int section, Qt::Orientation orientation,
                      int role = Qt::DisplayRole) const;
  void updateModelData(float (*data)[strobs]);
};

#endif // TABLEMODEL_H