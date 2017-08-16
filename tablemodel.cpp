#include "tablemodel.h"
#include <QColor>
#include <QCoreApplication>
#include <QDebug>
#include <QFile>

/**
 * @brief StrobeLengthWriteModel::StrobeLengthWriteModel
 * @param parent
 */

StrobeLengthWriteModel::StrobeLengthWriteModel(QObject *parent)
    : QSqlQueryModel(parent), _rows(regims), _cols(strobs + 1) {

  for (int row = 0; row < _rows; ++row)
    for (int col = 0; col < _cols - 1; ++col)
      _data[row][col] = 0;

  if (!checkDatabase_FileExists()) {
    connectDatabase();
    createTable();
  } else
    connectDatabase();

  refresh();
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

  // код для sql
  QVariant val = QSqlQueryModel::data(index, role);
  if (val.isValid() && (role == Qt::DisplayRole || role == Qt::EditRole)) {
    const_cast<StrobeLengthWriteModel *>(this)->setDataToBuffer(
        index.row(), index.column() - 1, val.value<int>());
    return val.toInt();
  }
  return val;
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

  return QSqlQueryModel::flags(index) | Qt::ItemIsEditable;
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
    _data[index.row()][index.column() - 1] = value.value<int>();
    // emit dataChanged(index, index);
  }

  QModelIndex primaryKeyIndex = QSqlQueryModel::index(index.row(), 0);
  int id = QSqlQueryModel::data(primaryKeyIndex).toInt();

  clear();
  QSqlQuery query(db);
  // db.transaction();
  query.exec(QString("insert into log values %1").arg(value.toInt()));
  query.prepare(
      QString("UPDATE REGIMES_AND_STROBES SET STROBE_%1 = ? WHERE id = ?")
          .arg(index.column() - 1));
  query.addBindValue(value.toInt());
  query.addBindValue(id);
  query.exec();

  refresh();

  return true;
}

void StrobeLengthWriteModel::refresh() {
  setQuery(QString("SELECT * FROM %1").arg(databaseName), db);
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
      return section - 1;
  }

  return QSqlQueryModel::headerData(section, orientation, role);
}

void StrobeLengthWriteModel::createTable() {
  qDebug() << "createTable!";
  // если файл с БД отсутсвтует, то создаем его и при помощи SQL команды создаем
  // в нем
  // таблицу и заполняем ее нулями
  QSqlQuery query(db);
  QString createTableStr = "create table if not exists REGIMES_AND_STROBES (";
  createTableStr += "ID INTEGER PRIMARY KEY NOT NULL, ";
  for (int strobe = 0; strobe < strobs - 1; ++strobe)
    createTableStr += QString("STROBE_%1 INTEGER, ").arg(strobe);
  createTableStr += "STROBE_13 INTEGER)";

  if (!query.exec(createTableStr))
    qCritical() << "table hasn't created";

  QString initTableStr = "INSERT INTO REGIMES_AND_STROBES VALUES ";
  QString colTableStr = " ";
  for (int strobe = 0; strobe < strobs - 1; ++strobe)
    colTableStr += QString("%1, ").arg(0);
  colTableStr += "0)";

  for (int regime = 0; regime < regims; ++regime)
    if (!query.exec(initTableStr + QString("(%1,").arg(regime) + colTableStr))
      qCritical() << "error!" << db.lastError().text();
}

bool StrobeLengthWriteModel::checkDatabase_FileExists() {
  qDebug() << "checkDatabase_FileExists!";
  // проверить, существует ли файл БД с расстановками.
  if (!QFile(QCoreApplication::applicationDirPath() + "/" + databaseName)
           .exists())
    return false;
  return true;
}

bool StrobeLengthWriteModel::connectDatabase() {
  qDebug() << "connectDatabase!";
  // устанавливаем соединение с БД
  // Соединение с БД
  db = QSqlDatabase::addDatabase("QSQLITE", "regimes_and_strobes_connection");
  db.setDatabaseName(databaseName);
  if (!db.open())
    return false;

  return true;
}

/**
 * @brief StrobeLengthWriteModel::getModelData
 */
void StrobeLengthWriteModel::getModelData(quint16 (*data)[strobs]) {
  /**
    Берем данные, чтобы отослать их на сервер
    */
  for (int row = 0; row < _rows; ++row)
    for (int col = 0; col < strobs; ++col)
      data[row][col] = _data[row][col];
}

void StrobeLengthWriteModel::setDataToBuffer(int row, int col, int val) {
  _data[row][col] = val;
}

void StrobeLengthWriteModel::setModelData(quint16 (*data)[strobs]) {
  // Получить данные от модели для считывания, для отображения и редактирования
  // в представлении для записи.
  // beginResetModel();
  for (int row = 0; row < _rows; ++row)
    for (int col = 0; col < strobs; ++col)
      _data[row][col] = data[row][col];
  // endResetModel();

  for (int row = 0; row < _rows; ++row) {
    for (int col = 0; col < strobs; ++col) {
      // после того, как получили данные в внутренний буфер, надо обновить БД
      QModelIndex primaryKeyIndex = QSqlQueryModel::index(row, 0);
      int id = QSqlQueryModel::data(primaryKeyIndex).toInt();
      clear();
      QSqlQuery query(db);
      // db.transaction();
      query.exec(QString("insert into log values %1").arg(_data[row][col]));
      query.prepare(
          QString("UPDATE REGIMES_AND_STROBES SET STROBE_%1 = ? WHERE id = ?")
              .arg(col));
      query.addBindValue(_data[row][col]);
      query.addBindValue(id);
      query.exec();
    }
  }

  refresh();
}
/*******************************************/
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
      _dataForCompare[row][col] = -1;
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

  beginResetModel();
  for (int row = 0; row < _rows; ++row)
    for (int col = 0; col < _cols; ++col)
      _data[row][col] = data[row][col];
  endResetModel();

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

void StrobeLengthReadModel::getModelData(quint16 (*data)[strobs]) {
  /**
    Берем данные, чтобы скопировать их в модель для записи и для дальнейшего
    копирования.
    */
  for (int row = 0; row < _rows; ++row)
    for (int col = 0; col < _cols; ++col)
      data[row][col] = _data[row][col];
}
