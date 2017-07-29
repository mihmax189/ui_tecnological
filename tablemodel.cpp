#include "tablemodel.h"
#include <QColor>
#include <QDebug>

StrobeLengthModel::StrobeLengthModel(QObject *parent)
    : QAbstractTableModel(parent), _rows(regims), _cols(strobs) {

  for (int _row = 0; _row < _rows; ++_row)
    for (int _col = 0; _col < _cols; ++_col) {
      _data[_row][_col] = 0;
      _flags[_row][_col] = false;
    }
}

QVariant StrobeLengthModel::data(const QModelIndex &index, int role) const {
  /**
    Отображение данных в представлении
  */
  if (!index.isValid())
    return QVariant();

  if (role == Qt::TextAlignmentRole)
    return Qt::AlignCenter;

  if (role == Qt::BackgroundColorRole && _flags[index.row()][index.column()])
    return QVariant::fromValue(QColor("light green"));
  else if (role == Qt::BackgroundColorRole)
    return QVariant::fromValue(QColor("white"));

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

  return QAbstractItemModel::flags(index) | Qt::ItemIsEditable;
}

bool StrobeLengthModel::setData(const QModelIndex &index, const QVariant &value,
                                int role) {
  /**
    Установка нового значения в ячейке при редактировании таблицы
    */

  if (index.isValid() && role == Qt::EditRole) {
    _data[index.row()][index.column()] = value.value<int>();
    emit dataChanged(index, index);
    return true;
  }

  return false;
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

void StrobeLengthModel::updateModelData(quint16 (*data)[strobs]) {
  /**
    Сравнение считанных данных с выставленными данными модели
  */
  beginResetModel();
  for (int _row = 0; _row < _rows; ++_row)
    for (int _col = 0; _col < _cols; ++_col)
      if (_data[_row][_col] == data[_row][_col]) {
        _flags[_row][_col] = true;
      }
  endResetModel();
}

void StrobeLengthModel::getModelData(quint16 (*data)[strobs]) {
  /**
    Берем данные, чтобы отослать их на сервер
    */
  for (int _row = 0; _row < _rows; ++_row)
    for (int _col = 0; _col < _cols; ++_col)
      data[_row][_col] = _data[_row][_col];
}

void StrobeLengthModel::resetFlags() {
  beginResetModel();
  for (int _row = 0; _row < _rows; ++_row)
    for (int _col = 0; _col < _cols; ++_col)
      _flags[_row][_col] = false;
  endResetModel();
}
