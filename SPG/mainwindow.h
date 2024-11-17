#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <passwordGenerator.h>
#include <QDebug>
#include <QLineEdit>
#include <QRegularExpression>
#include <QGroupBox>
#include <QScrollArea>
#include <QStyle>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_lineEdit_3_textChanged(const QString &arg1);

    QGroupBox* createNewGroupBox(const QString& siteName, const QString& login, const QString& password);
    void addNewGroupBoxesToScrollArea(QScrollArea* scrollArea, QStringList& sites, QStringList& logins, QStringList& passwords);
    void resizeEvent(QResizeEvent* event);
    void showEvent(QShowEvent* event);
private:
    Ui::MainWindow *ui;
    PasswordGenerator passGen;
    bool passLength,oneNum,oneBigLetter,oneSymbol= false;
    QStringList sit,log,pass;
};
#endif // MAINWINDOW_H
