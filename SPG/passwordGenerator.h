#ifndef PASSWORDGENERATOR_H
#define PASSWORDGENERATOR_H

#include <QWidget>

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

private:
    Ui::PasswordGenerator *ui;
};

#endif // PASSWORDGENERATOR_H
