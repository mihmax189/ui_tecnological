#include "tablemodel.h"
#include <QColor>
#include <QDebug>

/**
 * @brief StrobeLengthWriteModel::StrobeLengthWriteModel
 * @param parent
 */

StrobeLengthWriteModel::StrobeLengthWriteModel(QObject *parent)
    : QAbstractTableModel(parent), _rows(regims), _cols(strobs) {

  for (int row = 0; row < _rows; ++row)
    for (int col = 0; col < _cols; ++col) {
      _data[row][col] = 0;
    }
}

/**
 * @brief StrobeLengthWriteModel::data
 * @param index
 * @param role
 * @return
 */
QVariant StrobeLengthWriteModel::data(const QModelIndex &index,
                                      int role) const {
  /**
    Отображение данных в представлении
  */
  if (!index.isValid())
    return QVariant();

  if (role == Qt::TextAlignmentRole)
    return Qt::AlignCenter;

  return (role == Qt::DisplayRole || role == Qt::EditRole)
             ? _data[index.row()][index.column()]
             : QVariant();

  return QVariant();
}

/**
 * @brief StrobeLengthWriteModel::rowCount
 * @param index
 * @return
 */
int StrobeLengthWriteModel::rowCount(const QModelIndex &index) const {
  /**
    Возвращает количество строк в модели
  */
  Q_UNUSED(index)
  return _rows;
}

/**
 * @brief StrobeLengthWriteModel::columnCount
 * @param index
 * @return
 */
int StrobeLengthWriteModel::columnCount(const QModelIndex &index) const {
  /**
    Возвращает количество столбцов в модели
  */
  Q_UNUSED(index)
  return _cols;
}

/**
 * @brief StrobeLengthWriteModel::flags
 * @param index
 * @return
 */
Qt::ItemFlags StrobeLengthWriteModel::flags(const QModelIndex &index) const {
  if (!index.isValid())
    return Qt::ItemIsEnabled;

  return QAbstractItemModel::flags(index) | Qt::ItemIsEditable;
}

/**
 * @brief StrobeLengthWriteModel::setData
 * @param index
 * @param value
 * @param role
 * @return
 */
bool StrobeLengthWriteModel::setData(const QModelIndex &index,
                                     const QVariant &value, int role) {
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

/**
 * @brief StrobeLengthWriteModel::headerData
 * @param section
 * @param orientation
 * @param role
 * @return
 */
QVariant StrobeLengthWriteModel::headerData(int section,
                                            Qt::Orientation orientation,
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

/**
 * @brief StrobeLengthWriteModel::getModelData
 */
void StrobeLengthWriteModel::getModelData(quint16 (*data)[strobs]) {
  /**
    Берем данные, чтобы отослать их на сервер
    */
  for (int row = 0; row < _rows; ++row)
    for (int col = 0; col < _cols; ++col)
      data[row][col] = _data[row][col];
}

// Методы StrobeLengthReadModel
/**
 * @brief StrobeLengthReadModel::StrobeLengthReadModel
 * @param parent
 */
StrobeLengthReadModel::StrobeLengthReadModel(QObject *parent)
    : QAbstractTableModel(parent), _rows(regims), _cols(strobs) {

  for (int row = 0; row < _rows; ++row)
    for (int col = 0; col < _cols; ++col) {
      _data[row][col] = 0;
      _flags[row][col] = false;
    }
}

/**
 * @brief StrobeLengthReadModel::data
 * @param index
 * @param role
 * @return
 */
QVariant StrobeLengthReadModel::data(const QModelIndex &index, int role) const {
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

  return QVariant();
}

/**
 * @brief StrobeLengthReadModel::rowCount
 * @param index
 * @return
 */
int StrobeLengthReadModel::rowCount(const QModelIndex &index) const {
  /**
    Возвращает количество строк в модели
  */
  Q_UNUSED(index)
  return _rows;
}

/**
 * @brief StrobeLengthReadModel::columnCount
 * @param index
 * @return
 */
int StrobeLengthReadModel::columnCount(const QModelIndex &index) const {
  /**
    Возвращает количество столбцов в модели
  */
  Q_UNUSED(index)
  return _cols;
}

/**
 * @brief StrobeLengthReadModel::flags
 * @param index
 * @return
 */
Qt::ItemFlags StrobeLengthReadModel::flags(const QModelIndex &index) const {
  if (!index.isValid())
    return Qt::ItemIsEnabled;

  return QAbstractItemModel::flags(index);
}

/**
 * @brief StrobeLengthReadModel::headerData
 * @param section
 * @param orientation
 * @param role
 * @return
 */
QVariant StrobeLengthReadModel::headerData(int section,
                                           Qt::Orientation orientation,
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

void StrobeLengthReadModel::compareData() {
  for (int row = 0; row < _rows; ++row)
    for (int col = 0; col < _cols; ++col)
      if (_dataForCompare[row][col] == _data[row][col])
        _flags[row][col] = true;
}

/**
 * @brief StrobeLengthReadModel::setModelDataForCompare
 */
void StrobeLengthReadModel::setModelDataForCompare(quint16 (*data)[strobs]) {
  // Берем данные из модели StrobeLengthWriteModel для того чтобы их
  // сравнить с считанными данными, полученными с сервера
  for (int row = 0; row < _rows; ++row)
    for (int col = 0; col < _cols; ++col)
      _dataForCompare[row][col] = data[row][col];
}

/**
 * @brief StrobeLengthReadModel::updateModelData
 */
void StrobeLengthReadModel::updateModelData(quint16 (*data)[strobs]) {
  /**
   * Получить данные от сервера и установить их в модель
   */
  for (int row = 0; row < _rows; ++row)
    for (int col = 0; col < _cols; ++col)
      _data[row][col] = data[row][col];

  beginResetModel();
  compareData();
  endResetModel();
}

/**
 * @brief StrobeLengthReadModel::resetFlags
 */
void StrobeLengthReadModel::resetFlags() {
  beginResetModel();
  for (int row = 0; row < _rows; ++row)
    for (int col = 0; col < _cols; ++col)
      _flags[row][col] = false;
  endResetModel();
}
