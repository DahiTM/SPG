#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
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

