#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    std::vector<WebsiteInfo> retrievedInfoList = readFromFile();
    for (const WebsiteInfo& retrievedInfo : retrievedInfoList) {
        sit.push_back(retrievedInfo.name);
        log.push_back(retrievedInfo.username);
        pass.push_back(retrievedInfo.password);
    }

    addNewGroupBoxesToScrollArea(ui->scrollArea,sit,log,pass);

    connect(ui->lineEdit_4, &QLineEdit::textChanged, this, &MainWindow::onSearchTextChanged);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if(passLength && oneBigLetter && oneNum && oneSymbol && !ui->lineEdit->text().isEmpty() && !ui->lineEdit_2->text().isEmpty()){
        qDebug() << "true";
        WebsiteInfo info1 = { ui->lineEdit->text().toStdString(), ui->lineEdit_2->text().toStdString(), ui->lineEdit_3->text().toStdString() };

        sit.push_back(ui->lineEdit->text().toStdString());
        log.push_back(ui->lineEdit_2->text().toStdString());
        pass.push_back(ui->lineEdit_3->text().toStdString());

        writeToFile(info1);
        addNewGroupBoxesToScrollArea(ui->scrollArea,sit,log,pass);

        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
        ui->lineEdit_3->clear();
    }else{
        QMessageBox::information(this,"Информация","Ошибка при вводе пароля");
    }
}


void MainWindow::on_pushButton_2_clicked()
{
    passGen.show();
}


void MainWindow::on_lineEdit_3_textChanged(const QString &arg1)
{
    static const QRegularExpression IF_NUM("\\d");
    static const QRegularExpression IF_BIG_LETTERS("[A-Z]");
    static const QRegularExpression IF_SYMBOLS("[!#$%&()*+./:;=>?@^{|}~]");

    if(arg1.length() > 5){
        ui->checkBox->setCheckable(true);
        ui->checkBox->setCheckState(Qt::Checked);
        ui->checkBox->setEnabled(false);
        passLength = true;
    }else{
        ui->checkBox->setCheckable(false);
        ui->checkBox->setCheckState(Qt::Unchecked);
        passLength = false;
    }

    if(IF_BIG_LETTERS.match(arg1).hasMatch()){
        ui->checkBox_2->setCheckable(true);
        ui->checkBox_2->setCheckState(Qt::Checked);
        ui->checkBox_2->setEnabled(false);
        oneBigLetter = true;
    }else{
        ui->checkBox_2->setCheckable(false);
        ui->checkBox_2->setCheckState(Qt::Unchecked);
        oneBigLetter = false;
    }

    if(IF_NUM.match(arg1).hasMatch()){
        ui->checkBox_4->setCheckable(true);
        ui->checkBox_4->setCheckState(Qt::Checked);
        ui->checkBox_4->setEnabled(false);
        oneNum = true;
    }else{
        ui->checkBox_4->setCheckable(false);
        ui->checkBox_4->setCheckState(Qt::Unchecked);
        oneNum = false;
    }

    if(IF_SYMBOLS.match(arg1).hasMatch()){
        ui->checkBox_3->setCheckable(true);
        ui->checkBox_3->setCheckState(Qt::Checked);
        ui->checkBox_3->setEnabled(false);
        oneSymbol = true;
    }else{
        ui->checkBox_3->setCheckable(false);
        ui->checkBox_3->setCheckState(Qt::Unchecked);
        oneSymbol = false;
    }
}

QGroupBox* MainWindow::createNewGroupBox(const QString& siteName, const QString& login, const QString& password) {

    QGroupBox* newGroupBox = new QGroupBox(siteName);
    newGroupBox->setMinimumHeight(123);
    newGroupBox->setMinimumWidth(241);
    newGroupBox->setMaximumHeight(123);
    newGroupBox->setMaximumWidth(241);


    QVBoxLayout* layout = new QVBoxLayout(newGroupBox);

    QHBoxLayout *loginLayout = new QHBoxLayout();
    QHBoxLayout *passwordLayout = new QHBoxLayout();

    QLineEdit *loginEdit = new QLineEdit(newGroupBox);
    loginEdit->setText(login);
    loginEdit->setReadOnly(true);
    loginLayout->addWidget(loginEdit);

    QLineEdit *passwordEdit = new QLineEdit(newGroupBox);
    passwordEdit->setText(password);
    passwordEdit->setEchoMode(QLineEdit::Password);
    passwordEdit->setReadOnly(true);
    passwordLayout->addWidget(passwordEdit);

    QPushButton *copyLoginButton = new QPushButton(newGroupBox);
    copyLoginButton->setIcon(QIcon::fromTheme("edit-copy"));
    copyLoginButton->setFixedSize(31, 31);
    connect(copyLoginButton, &QPushButton::clicked,this, [loginEdit]() {
        QClipboard *clipboard = QApplication::clipboard();
        clipboard->setText(loginEdit->text());

        QMessageBox::information(nullptr, "Логин скопирован", "Логин успешно скопирован в буфер обмена.");
    });

    QPushButton *copyPassButton = new QPushButton(newGroupBox);
    copyPassButton->setIcon(QIcon::fromTheme("edit-copy"));
    copyPassButton->setFixedSize(31, 31);
    connect(copyPassButton, &QPushButton::clicked,this, [passwordEdit]() {
        QClipboard *clipboard = QApplication::clipboard();
        clipboard->setText(passwordEdit->text());
        QMessageBox::information(nullptr,"Информация","Пароль скопирован в буфер обмена");
    });

    // Кнопка для скрытия/показа пароля
    QPushButton *toggleButton = new QPushButton(newGroupBox);
    toggleButton->setIcon(style()->standardIcon(QStyle::SP_DialogNoButton));
    toggleButton->setFixedSize(31, 31);
    connect(toggleButton, &QPushButton::clicked,this, [this,passwordEdit, toggleButton]() {
        if (passwordEdit->echoMode() == QLineEdit::Password) {
            passwordEdit->setEchoMode(QLineEdit::Normal);
            toggleButton->setIcon(style()->standardIcon(QStyle::SP_DialogYesButton));
        } else {
            passwordEdit->setEchoMode(QLineEdit::Password);
            toggleButton->setIcon(style()->standardIcon(QStyle::SP_DialogNoButton));
        }
    });

    QPushButton *deleteButton = new QPushButton(newGroupBox);
    deleteButton->setIcon(QIcon::fromTheme("edit-delete"));
    deleteButton->setFixedSize(31, 31);
    connect(deleteButton, &QPushButton::clicked, this, [this, siteName, newGroupBox]() {
        // Удаляем информацию из векторов
        auto it = std::find(sit.begin(), sit.end(), siteName.toStdString());
        if (it != sit.end()) {
            size_t index = std::distance(sit.begin(), it);
            sit.erase(it);
            log.erase(log.begin() + index);
            pass.erase(pass.begin() + index);
        }

        // Обновляем файл
        updateFile();

        // Удаляем QGroupBox
        delete newGroupBox;
        addNewGroupBoxesToScrollArea(ui->scrollArea, sit, log, pass);
        QMessageBox::information(nullptr,"Информация","Поле с данными было удалено");
    });

    loginLayout->addWidget(copyLoginButton);
    passwordLayout->addWidget(copyPassButton);
    passwordLayout->addWidget(toggleButton);

    layout->addLayout(loginLayout);
    layout->addLayout(passwordLayout);
    layout->addWidget(deleteButton, 0, Qt::AlignBottom | Qt::AlignRight); // Размещение кнопки внизу справа

    newGroupBox->setLayout(layout);
    return newGroupBox;
}

void MainWindow::addNewGroupBoxesToScrollArea(QScrollArea* scrollArea,
                                              const std::vector<std::string>& sites,
                                              const std::vector<std::string>& logins,
                                              const std::vector<std::string>& passwords) {

    QWidget* scrollWidget = new QWidget();
    QVBoxLayout* scrollLayout = new QVBoxLayout(scrollWidget);

    QLayoutItem* item;
    while ((item = scrollLayout->takeAt(0)) != nullptr) {
        delete item->widget();
        delete item;
    }

    int scrollAreaWidth = scrollArea->viewport()->width();
    int maxColumns = scrollAreaWidth / 241;

    QHBoxLayout* rowLayout = nullptr;
    int column = 0;

    for (size_t i = 0; i < sites.size(); ++i) {
        if (column == 0) {
            rowLayout = new QHBoxLayout();
        }

        QGroupBox* newGroupBox = createNewGroupBox(QString::fromStdString(sites[i]),
                                                   QString::fromStdString(logins[i]),
                                                   QString::fromStdString(passwords[i]));
        rowLayout->addWidget(newGroupBox);
        column++;

        // Если превышаем максимальное количество колонок, добавляем текущий ряд в основной макет
        if (column >= maxColumns) {
            scrollLayout->addLayout(rowLayout);
            column = 0;
        }
    }

    // Добавляем последний ряд, если он не пустой
    if (column > 0) {
        scrollLayout->addLayout(rowLayout);
    }

    // Устанавливаем фиксированные отступы между GroupBox
    for (int i = 0; i < scrollLayout->count(); ++i) {
        QLayout* layout = scrollLayout->itemAt(i)->layout();
        if (layout) {
            layout->setSpacing(15);
        }
    }

    scrollWidget->setLayout(scrollLayout);
    scrollArea->setWidget(scrollWidget);
    scrollArea->setWidgetResizable(true);
}

void MainWindow::showEvent(QShowEvent* event) {
    QScrollArea* existingFrame = ui->scrollArea;
    addNewGroupBoxesToScrollArea(existingFrame,sit,log,pass);
    QMainWindow::showEvent(event);
}

void MainWindow::resizeEvent(QResizeEvent* event) {
    QScrollArea* existingFrame = ui->scrollArea;
    addNewGroupBoxesToScrollArea(existingFrame,sit,log,pass);
    QMainWindow::resizeEvent(event);
}

void MainWindow::writeToFile(const WebsiteInfo& infoList) {
    std::ofstream file("infoPass.txt", std::ios::app);

    file << infoList.name << "-"<< infoList.username << "-" << infoList.password << "\n";

    file.close();
}

std::vector<WebsiteInfo> MainWindow::readFromFile() {
    std::vector<WebsiteInfo> infoList;
    std::ifstream file("infoPass.txt");
    WebsiteInfo info;
    char razdel = '-';
    std::string line;

    while (getline(file, line)) {
        std::istringstream iss(line);
        getline(iss, info.name, razdel);
        getline(iss, info.username, razdel);
        getline(iss, info.password);
        infoList.push_back(info);
    }

    file.close();
    return infoList;
}

void MainWindow::updateFile() {
    std::ofstream file("infoPass.txt", std::ios::trunc); // Очищаем файл
    for (size_t i = 0; i < sit.size(); ++i) {
        file << sit[i] << "-" << log[i] << "-" << pass[i] << "\n";
    }
    file.close();
}

void MainWindow::onSearchTextChanged(const QString &text) {
    std::vector<std::string> filteredSites;
    std::vector<std::string> filteredLogins;
    std::vector<std::string> filteredPasswords;

    for (size_t i = 0; i < sit.size(); ++i) {
        if (sit[i].find(text.toStdString()) == 0) {
            filteredSites.push_back(sit[i]);
            filteredLogins.push_back(log[i]);
            filteredPasswords.push_back(pass[i]);
        }
    }

    addNewGroupBoxesToScrollArea(ui->scrollArea, filteredSites, filteredLogins, filteredPasswords);
}
