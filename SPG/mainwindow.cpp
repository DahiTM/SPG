#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    sit = { "Wildberis", "Ozon", "Site 3", "Yzndex", "Site 5", "Site 6", "Site 7", "Site 8", "Site 9","Site 1", "Site 2", "Site 3", "Site 4", "Site 5", "Site 6", "Site 7", "Site 8", "Site 9" };
    log = { "user1", "user2", "user3", "user4", "user5", "user6", "Site 4", "Site 5", "Site 6","Site 1", "Site 2", "Site 3", "Site 4", "Site 5", "Site 6", "Site 7", "Site 8", "Site 9" };
    pass = { "password1", "password2", "password3", "password4", "password5", "password6", "Site 4", "Site 5", "Site 6","Site 1", "Site 2", "Site 3", "Site 4", "Site 5", "Site 6", "Site 7", "Site 8", "Site 9"};

    addNewGroupBoxesToScrollArea(ui->scrollArea,sit,log,pass);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if(passLength && oneBigLetter && oneNum && oneSymbol){
        qDebug() << "true";
    }else{
        qDebug() << "false";
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
    connect(copyLoginButton, &QPushButton::clicked, [loginEdit]() {
        QClipboard *clipboard = QApplication::clipboard();
        clipboard->setText(loginEdit->text());

        QMessageBox::information(nullptr, "Логин скопирован", "Логин успешно скопирован в буфер обмена.");
    });

    QPushButton *copyPassButton = new QPushButton(newGroupBox);
    copyPassButton->setIcon(QIcon::fromTheme("edit-copy"));
    copyPassButton->setFixedSize(31, 31);
    connect(copyPassButton, &QPushButton::clicked, [passwordEdit]() {
        QClipboard *clipboard = QApplication::clipboard();
        clipboard->setText(passwordEdit->text());
        QMessageBox::information(nullptr,"Информация","Пароль скопирован в буфер обмена");
    });



    // Кнопка для скрытия/показа пароля
    QPushButton *toggleButton = new QPushButton(newGroupBox);
    toggleButton->setIcon(style()->standardIcon(QStyle::SP_DialogNoButton));
    toggleButton->setFixedSize(31, 31);
    connect(toggleButton, &QPushButton::clicked, [this,passwordEdit, toggleButton]() {
        if (passwordEdit->echoMode() == QLineEdit::Password) {
            passwordEdit->setEchoMode(QLineEdit::Normal);
            toggleButton->setIcon(style()->standardIcon(QStyle::SP_DialogYesButton));
        } else {
            passwordEdit->setEchoMode(QLineEdit::Password);
            toggleButton->setIcon(style()->standardIcon(QStyle::SP_DialogNoButton));
        }
    });

    loginLayout->addWidget(copyLoginButton);
    passwordLayout->addWidget(copyPassButton);
    passwordLayout->addWidget(toggleButton);

    layout->addLayout(loginLayout);
    layout->addLayout(passwordLayout);

    newGroupBox->setLayout(layout);
    return newGroupBox;
}

void MainWindow::addNewGroupBoxesToScrollArea(QScrollArea* scrollArea, QStringList& sites, QStringList& logins, QStringList& passwords) {

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

    for (int i = 0; i < sites.size(); ++i) {
        if (column == 0) {
            rowLayout = new QHBoxLayout();
        }

        QGroupBox* newGroupBox = createNewGroupBox(sites[i], logins[i], passwords[i]);
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
