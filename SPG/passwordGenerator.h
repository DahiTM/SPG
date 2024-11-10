#ifndef PASSWORDGENERATOR_H
#define PASSWORDGENERATOR_H

#include <QWidget>
#include <QApplication>
#include <QClipboard>
#include <QMessageBox>
#include <QDebug>
#include <classPasswordGeneration.h>

namespace Ui {
class PasswordGenerator;
}

class PasswordGenerator : public QWidget
{
    Q_OBJECT

public:
    explicit PasswordGenerator(QWidget *parent = nullptr);
    ~PasswordGenerator();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::PasswordGenerator *ui;
    ClassPasswordGeneration genPass;
};

#endif // PASSWORDGENERATOR_H
