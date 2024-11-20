#include "passwordGenerator.h"
#include "ui_passwordGenerator.h"

PasswordGenerator::PasswordGenerator(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PasswordGenerator)
{
    ui->setupUi(this);
    QIcon icon("images/key.png");
    this->setWindowIcon(icon);
    ui->label_2->setText(genPass.generatPass(16,true));
}

PasswordGenerator::~PasswordGenerator()
{
    delete ui;
}

void PasswordGenerator::on_pushButton_2_clicked()
{
    bool chekCheckBox = ui->checkBox->isChecked();
    int characterСount = ui->spinBox->value();

    ui->label_2->setText(genPass.generatPass(characterСount,chekCheckBox));

}

void PasswordGenerator::on_pushButton_clicked()
{
    QClipboard *clipboard = QGuiApplication::clipboard();
    clipboard->setText(ui->label_2->text());
    QMessageBox::information(this,"Информация","Пароль скопирован в буфер обмена");
}

