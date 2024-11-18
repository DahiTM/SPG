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
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

struct WebsiteInfo {
    std::string name;
    std::string username;
    std::string password;
};
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
    void addNewGroupBoxesToScrollArea(QScrollArea* scrollArea,const std::vector<std::string>& sites,
                                                              const std::vector<std::string>& logins,
                                                              const std::vector<std::string>& passwords);
    void resizeEvent(QResizeEvent* event);
    void showEvent(QShowEvent* event);

    void writeToFile(const WebsiteInfo& infoList);
    std::vector<WebsiteInfo> readFromFile();
    void updateFile();
private:
    Ui::MainWindow *ui;
    PasswordGenerator passGen;
    bool passLength,oneNum,oneBigLetter,oneSymbol= false;
    std::vector<std::string> sit,log,pass;

};
#endif // MAINWINDOW_H
