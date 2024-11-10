#include "passwordGenerator.h"
#include "ui_passwordGenerator.h"

PasswordGenerator::PasswordGenerator(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::PasswordGenerator)
{
    ui->setupUi(this);
}

PasswordGenerator::~PasswordGenerator()
{
    delete ui;
}

void PasswordGenerator::on_pushButton_2_clicked()
{


}
