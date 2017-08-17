#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QComboBox>
#include <QDebug>
#include <QLineEdit>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);

  strobeLengthWriteModel = new StrobeLengthWriteModel(this);

  ui->writeTableView->setModel(strobeLengthWriteModel);
  ui->writeTableView->hideColumn(0);

  ui->writeTableView->horizontalHeader()->setSectionResizeMode(
      QHeaderView::Stretch);
  ui->writeTableView->verticalHeader()->setSectionResizeMode(
      QHeaderView::Stretch);

  strobeLengthReadModel = new StrobeLengthReadModel(this);
  ui->readTableView->setModel(strobeLengthReadModel);
  ui->readTableView->horizontalHeader()->setSectionResizeMode(
      QHeaderView::Stretch);
  ui->readTableView->verticalHeader()->setSectionResizeMode(
      QHeaderView::Stretch);

  if (!readSocket.bind(7252, QUdpSocket::ShareAddress))
    qCritical("recvSocket bind error!");

  connect(&readSocket, SIGNAL(readyRead()), this, SLOT(processReadData()));

  connect(ui->sendButton, SIGNAL(clicked(bool)), this,
          SLOT(sendButtonSlot(bool)));
  connect(ui->readButton, SIGNAL(clicked(bool)), this,
          SLOT(readButtonSlot(bool)));
  connect(ui->fireButton, SIGNAL(clicked(bool)), this,
          SLOT(fireButtonSlot(bool)));

  connect(ui->regimeComboBox, SIGNAL(activated(int)), this,
          SLOT(setItemsForNumberFragmentComboBox(int)));
  connect(ui->regimeComboBox, SIGNAL(activated(int)), this,
          SLOT(setItemsForNumberModuleComboBox(int)));

  connect(ui->copyReadDataToWriteDataPushButton, SIGNAL(clicked(bool)), this,
          SLOT(copyDataButtonSlot(bool)));

  connect(strobeLengthWriteModel, SIGNAL(finished()), SLOT(finishWork()));

  // посылка кодограммы на сервер о начале работы сеанса прожига расстановок
  Codograms::session_regimes_and_strobes buff;
  buff.m.state = session_regimes_and_strobes__begin;
  marshalAndSend(buff, "193.1.1.64", 7251);

  setButtonsToRegularMode();
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::marshalAndSend(Codograms::Codogram &cdg, const QString &addr,
                                quint16 port) {
  cdg.marshal();
  if (sendSocket.writeDatagram(cdg.getBuf(), QHostAddress(addr), port) == -1)
    qCritical("writeDatagram");
}

void MainWindow::sendButtonSlot(bool) {
  quint16 data[regims][strobs];
  strobeLengthWriteModel->getModelData(data);

  Codograms::send_regimes_and_strobes_data buff;
  for (int _regime = 0; _regime < regims; ++_regime) {
    for (int _strobe = 0; _strobe < strobs; ++_strobe) {
      buff.m.strobe_length_in_cols[_strobe] = data[_regime][_strobe];
    }
    buff.m.regime = _regime;
    marshalAndSend(buff, "193.1.1.64", 7251);
  }
  // И передать эти данные в модель strobeLengthReadModel для последующего
  // их сравнения с считанными данными
  strobeLengthReadModel->setModelDataForCompare(data);
}

void MainWindow::readButtonSlot(bool) {
  Codograms::regimes_and_strobes_data_request buff;

  // запросить данные по текущему режиму
  switch (ui->regimeComboBox->currentIndex()) {
  case regimes_and_strobes_data_request__PR:
    buff.m.regime = regimes_and_strobes_data_request__PR;
    break;

  case regimes_and_strobes_data_request__PD:
    buff.m.regime = regimes_and_strobes_data_request__PD;
    break;

  case regimes_and_strobes_data_request__KK:
    buff.m.regime = regimes_and_strobes_data_request__KK;
    break;

  default:
    break;
  }

  // запросить данные по заданному фрагменту
  buff.m.number_fragment = ui->numberFragmentComboBox->currentIndex();
  // запросить данные по заданному модулю во фрагменте
  buff.m.number_module = ui->numberModuleComboBox->currentIndex();

  // послать запрос на сервер: выдать засланные данные на панель.
  marshalAndSend(buff, "193.1.1.64", 7251);
  // и сбрасываем флаги предыдущего сравнения с считанными данными. ??? надо
  // подумать где сбрасывать флаги
  strobeLengthReadModel->resetFlags();
}

void MainWindow::fireButtonSlot(bool) {
  Codograms::fire_regimes_and_strobes_data buff;
  // послать на сервер команду прожечь модули данными по режимам и стробам
  marshalAndSend(buff, "193.1.1.64", 7251);
}

void MainWindow::processReadData() {
  Codograms::read_regimes_and_strobes_data buff;
  Codograms::progress_indicator_process_regimes_and_strobes progress_buff;

  while (readSocket.hasPendingDatagrams()) {
    QByteArray resp(readSocket.pendingDatagramSize(), '\0');
    readSocket.readDatagram(resp.data(), resp.size());

    if (Is_read_regimes_and_strobes_data(resp.data(), resp.size())) {
      buff.buf = resp;
      buff.unmarshal();
      ui->numberModuleLabel->setText(QString::number(buff.m.number_module + 1));
      getDataForModel(buff.m.strobe_length_in_cols, buff.m.regime);
    }

    if (Is_progress_indicator_process_regimes_and_strobes(resp.data(),
                                                          resp.size())) {
      progress_buff.buf = resp;
      progress_buff.unmarshal();
      ui->progressBar->setValue(progress_buff.m.progress);

      // подсвечиваем кнопку ui пока сервер выполняет определенный процесс
      // (записи, чтения или прожига)
      switch (progress_buff.m.process) {
      case progress_indicator_process_regimes_and_strobes__write:
        setButtonToStateProcess(ui->sendButton);
        break;

      case progress_indicator_process_regimes_and_strobes__read:
        setButtonToStateProcess(ui->readButton);
        break;

      case progress_indicator_process_regimes_and_strobes__fire:
        setButtonToStateProcess(ui->fireButton);
        break;

      case progress_indicator_process_regimes_and_strobes__none:
        setButtonsToRegularMode();
        break;

      default:
        break;
      }
    }
  }
}

void MainWindow::getDataForModel(quint16 *strobe_length, int regime) {
  static quint16 data[regims][strobs];
  for (int _strobe = 0; _strobe < strobs; ++_strobe)
    data[regime][_strobe] = strobe_length[_strobe];

  if (regime == (regims - 1))
    strobeLengthReadModel->updateModelData(data);
}

void MainWindow::sendEndSession() {
  // посылка кодограммы на сервер о конце работы сеанса прожига расстановок
  Codograms::session_regimes_and_strobes buff;
  buff.m.state = session_regimes_and_strobes__end;
  marshalAndSend(buff, "193.1.1.64", 7251);
}

void MainWindow::setButtonToStateProcess(QPushButton *bt) {
  /**
   * @brief pal
   * Подсвечиваем синей рамкой кнопку, название которой соответсвует
   * выполняемому процессу.
   * В сервере предусмотрена страховка от включения другого процесса, пока
   * выполняется
   * определенный процесс.
   */
  QPalette pal = bt->palette();
  pal.setColor(QPalette::Window, QColor(Qt::green));
  bt->setAutoFillBackground(true);
  bt->setPalette(pal);
  bt->update();
}

void MainWindow::setButtonsToRegularMode() {
  // Можно использовать контейне указателей на кнопки, которые размещены на
  // форме
  QPalette pal = ui->sendButton->palette();
  pal.setColor(QPalette::Window, QColor(Qt::blue));
  ui->sendButton->setAutoFillBackground(true);
  ui->sendButton->setPalette(pal);
  ui->sendButton->update();

  pal = ui->readButton->palette();
  pal.setColor(QPalette::Window, QColor(Qt::blue));
  ui->readButton->setAutoFillBackground(true);
  ui->readButton->setPalette(pal);
  ui->readButton->update();

  pal = ui->sendButton->palette();
  pal.setColor(QPalette::Window, QColor(Qt::blue));
  ui->fireButton->setAutoFillBackground(true);
  ui->fireButton->setPalette(pal);
  ui->fireButton->update();

  pal = ui->copyReadDataToWriteDataPushButton->palette();
  pal.setColor(QPalette::Window, QColor(Qt::blue));
  ui->copyReadDataToWriteDataPushButton->setAutoFillBackground(true);
  ui->copyReadDataToWriteDataPushButton->setPalette(pal);
  ui->copyReadDataToWriteDataPushButton->update();
}

void MainWindow::setItemsForNumberFragmentComboBox(int index) {
  /**
    В зависимости от выбранного значения в regimeComboBox отображаем разные
    значения
    в numberFragmentComboBox
    */
  QStringList itemsForNumberFragmentPR, itemsForNumberFragmentPD,
      itemsForNumberFragmentKK;
  itemsForNumberFragmentPR << "1"
                           << "2"
                           << "3"
                           << "4"
                           << "5"
                           << "6"
                           << "7"
                           << "8"
                           << "9"
                           << "10"
                           << "11"
                           << "12"
                           << "13"
                           << "14"
                           << "15"
                           << "16";

  itemsForNumberFragmentPD << "1"
                           << "2"
                           << "3";

  itemsForNumberFragmentKK << "1"
                           << "2"
                           << "3"
                           << "4"
                           << "5"
                           << "6"
                           << "7"
                           << "8";

  ui->numberFragmentComboBox->clear();
  switch (index) {
  case regime_key_fap_request__pr:
    ui->numberFragmentComboBox->addItems(itemsForNumberFragmentPR);
    break;

  case regime_key_fap_request__pd:
    ui->numberFragmentComboBox->addItems(itemsForNumberFragmentPD);
    break;

  case regime_key_fap_request__kk:
    ui->numberFragmentComboBox->addItems(itemsForNumberFragmentKK);
    break;
  }
}

void MainWindow::setItemsForNumberModuleComboBox(int index) {
  /*
   * В зависимости от выбранного значения в numberRegimeComboBox выставляемм
   * разные
   * значения в numberModuleComboBox
   * */

  QStringList itemsForNumberModulePR, itemsForNumberModulePD,
      itemsForNumberModuleKK;

  itemsForNumberModulePD << "1"
                         << "2"
                         << "3"
                         << "4"
                         << "5"
                         << "6"
                         << "7"
                         << "8"
                         << "9"
                         << "10"
                         << "11"
                         << "12"
                         << "13"
                         << "14"
                         << "15"
                         << "16"
                         << "17"
                         << "18"
                         << "19"
                         << "20"
                         << "21"
                         << "22"
                         << "23"
                         << "24"
                         << "25"
                         << "26"
                         << "27"
                         << "28"
                         << "29"
                         << "30"
                         << "31"
                         << "32"
                         << "33"
                         << "34"
                         << "35"
                         << "36"
                         << "37"
                         << "38"
                         << "39"
                         << "40"
                         << "41"
                         << "42"
                         << "43"
                         << "44"
                         << "45"
                         << "46"
                         << "47"
                         << "48"
                         << "49"
                         << "50"
                         << "51"
                         << "52"
                         << "53"
                         << "54";

  itemsForNumberModulePR << "1"
                         << "2"
                         << "3"
                         << "4"
                         << "5"
                         << "6"
                         << "7"
                         << "8";

  itemsForNumberModuleKK << "1"
                         << "2";

  ui->numberModuleComboBox->clear();

  switch (index) {
  case regime_key_fap_request__pr:
    ui->numberModuleComboBox->addItems(itemsForNumberModulePR);
    break;

  case regime_key_fap_request__pd:
    ui->numberModuleComboBox->addItems(itemsForNumberModulePD);
    break;

  case regime_key_fap_request__kk:
    ui->numberModuleComboBox->addItems(itemsForNumberModuleKK);
    break;
  }
}

void MainWindow::copyDataButtonSlot(bool) {
  setButtonToStateProcess(ui->copyReadDataToWriteDataPushButton);
  quint16 data[regims][strobs];
  strobeLengthReadModel->getModelData(data);
  // test code
  WorkerThread *workerThread = new WorkerThread(this);
  workerThread->setFunction(strobeLengthWriteModel, data);
  workerThread->start();

  // strobeLengthWriteModel->setModelData(data);
}

void MainWindow::finishWork() { setButtonsToRegularMode(); }
