#include "tablemodel.h"

StrobeLengthModel::StrobeLengthModel(QObject *parent)
    : QAbstractTableModel(parent), _rows(regims), _cols(strobs) {

  for (int _row = 0; _row < _rows; ++_row)
    for (int _col = 0; _col < _cols; ++_col)
      _data[_row][_col] = 0;
}

QVariant StrobeLengthModel::data(const QModelIndex &index, int role) const {
  /**
    Отображение данных в представлении
  */
  if (!index.isValid())
    return QVariant();

  if (role == Qt::TextAlignmentRole)
    return Qt::AlignCenter;

  return (role == Qt::DisplayRole) ? _data[index.row()][index.column()]
                                   : QVariant();
}

int StrobeLengthModel::rowCount(const QModelIndex &index) const {
  /**
    Возвращает количество строк в модели
  */
  Q_UNUSED(index)
  return _rows;
}

int StrobeLengthModel::columnCount(const QModelIndex &index) const {
  /**
    Возвращает количество столбцов в модели
  */
  Q_UNUSED(index)
  return _cols;
}

Qt::ItemFlags StrobeLengthModel::flags(const QModelIndex &index) const {
  if (!index.isValid())
    return Qt::ItemIsEnabled;

  return QAbstractItemModel::flags(index);
}

QVariant StrobeLengthModel::headerData(int section, Qt::Orientation orientation,
                                       int role) const {
  if (role == Qt::DisplayRole) {
    if (orientation == Qt::Vertical) {
      // reverse row numbers
      return section;
    }

    if (orientation == Qt::Horizontal)
      return section;
  }

  return QAbstractTableModel::headerData(section, orientation, role);
}

void StrobeLengthModel::updateModelData(float (*data)[strobs]) {
  /**
    Обновление данных модели
  */
  beginResetModel();
  for (int _row = 0; _row < _rows; ++_row)
    for (int _col = 0; _col < _cols; ++_col)
      _data[_row][_col] = data[_row][_col];
  // после обновления данных в модели, ее надо обновить
  endResetModel();
}
