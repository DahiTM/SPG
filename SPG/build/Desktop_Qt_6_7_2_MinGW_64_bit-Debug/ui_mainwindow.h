/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *frame_4;
    QFrame *frame_5;
    QFrame *frame_6;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label_6;
    QLineEdit *lineEdit_4;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QSpacerItem *verticalSpacer;
    QFormLayout *formLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButton;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_8;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer_4;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QMenuBar *menubar;
    QMenu *menuMenu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(800, 600));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        MainWindow->setFont(font);
        action = new QAction(MainWindow);
        action->setObjectName("action");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy1);
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName("gridLayout");
        frame_4 = new QFrame(centralwidget);
        frame_4->setObjectName("frame_4");
        frame_4->setMinimumSize(QSize(520, 411));
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        frame_5 = new QFrame(frame_4);
        frame_5->setObjectName("frame_5");
        frame_5->setGeometry(QRect(10, 10, 240, 80));
        frame_5->setFrameShape(QFrame::Shape::StyledPanel);
        frame_5->setFrameShadow(QFrame::Shadow::Raised);
        frame_6 = new QFrame(frame_4);
        frame_6->setObjectName("frame_6");
        frame_6->setGeometry(QRect(270, 10, 240, 80));
        frame_6->setFrameShape(QFrame::Shape::StyledPanel);
        frame_6->setFrameShadow(QFrame::Shadow::Raised);

        gridLayout->addWidget(frame_4, 1, 1, 3, 1);

        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName("frame_3");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy2);
        frame_3->setMinimumSize(QSize(520, 50));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_6 = new QVBoxLayout(frame_3);
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_6 = new QLabel(frame_3);
        label_6->setObjectName("label_6");
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        label_6->setFont(font1);

        horizontalLayout->addWidget(label_6);

        lineEdit_4 = new QLineEdit(frame_3);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setMinimumSize(QSize(200, 0));
        lineEdit_4->setMaximumSize(QSize(300, 16777215));
        lineEdit_4->setFrame(true);
        lineEdit_4->setReadOnly(false);

        horizontalLayout->addWidget(lineEdit_4);

        horizontalSpacer_2 = new QSpacerItem(0, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_6->addLayout(horizontalLayout);


        gridLayout->addWidget(frame_3, 0, 1, 1, 1);

        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy3);
        frame->setMinimumSize(QSize(250, 330));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_5 = new QVBoxLayout(frame);
        verticalLayout_5->setObjectName("verticalLayout_5");
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setMinimumSize(QSize(0, 0));
        label->setFont(font1);

        verticalLayout_5->addWidget(label);

        verticalSpacer_2 = new QSpacerItem(20, 28, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        verticalLayout_5->addItem(verticalSpacer_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setFrame(true);

        verticalLayout->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(frame);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setFrame(true);
        lineEdit_2->setReadOnly(false);

        verticalLayout->addWidget(lineEdit_2);

        lineEdit_3 = new QLineEdit(frame);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setFrame(true);
        lineEdit_3->setReadOnly(false);

        verticalLayout->addWidget(lineEdit_3);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_4->addLayout(verticalLayout);

        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName("formLayout_2");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(-1, -1, 80, -1);
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        QFont font2;
        font2.setPointSize(9);
        font2.setBold(true);
        label_2->setFont(font2);

        verticalLayout_2->addWidget(label_2);

        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");
        label_3->setFont(font2);

        verticalLayout_2->addWidget(label_3);

        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");
        label_4->setFont(font2);

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");
        label_5->setFont(font2);

        verticalLayout_2->addWidget(label_5);


        formLayout_2->setLayout(0, QFormLayout::LabelRole, verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        checkBox = new QCheckBox(frame);
        checkBox->setObjectName("checkBox");
        checkBox->setMouseTracking(true);
        checkBox->setCheckable(false);

        verticalLayout_3->addWidget(checkBox);

        checkBox_2 = new QCheckBox(frame);
        checkBox_2->setObjectName("checkBox_2");
        checkBox_2->setMouseTracking(true);
        checkBox_2->setCheckable(false);
        checkBox_2->setChecked(false);

        verticalLayout_3->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(frame);
        checkBox_3->setObjectName("checkBox_3");
        checkBox_3->setMouseTracking(true);
        checkBox_3->setCheckable(false);

        verticalLayout_3->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(frame);
        checkBox_4->setObjectName("checkBox_4");
        checkBox_4->setMouseTracking(true);
        checkBox_4->setCheckable(false);

        verticalLayout_3->addWidget(checkBox_4);


        formLayout_2->setLayout(0, QFormLayout::FieldRole, verticalLayout_3);


        verticalLayout_4->addLayout(formLayout_2);

        verticalSpacer_3 = new QSpacerItem(20, 30, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_3);


        verticalLayout_5->addLayout(verticalLayout_4);

        pushButton = new QPushButton(frame);
        pushButton->setObjectName("pushButton");

        verticalLayout_5->addWidget(pushButton);


        gridLayout->addWidget(frame, 0, 0, 3, 1);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setMinimumSize(QSize(250, 130));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_8 = new QVBoxLayout(frame_2);
        verticalLayout_8->setObjectName("verticalLayout_8");
        pushButton_2 = new QPushButton(frame_2);
        pushButton_2->setObjectName("pushButton_2");
        sizePolicy2.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy2);
        pushButton_2->setMaximumSize(QSize(16777215, 16777215));

        verticalLayout_8->addWidget(pushButton_2);

        verticalSpacer_4 = new QSpacerItem(10, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_4);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setSizeConstraint(QLayout::SizeConstraint::SetDefaultConstraint);
        label_7 = new QLabel(frame_2);
        label_7->setObjectName("label_7");
        sizePolicy2.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy2);
        label_7->setMinimumSize(QSize(100, 0));
        QFont font3;
        font3.setPointSize(8);
        font3.setBold(true);
        label_7->setFont(font3);
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_7->addWidget(label_7);

        label_8 = new QLabel(frame_2);
        label_8->setObjectName("label_8");
        sizePolicy2.setHeightForWidth(label_8->sizePolicy().hasHeightForWidth());
        label_8->setSizePolicy(sizePolicy2);
        label_8->setMinimumSize(QSize(90, 0));
        label_8->setFont(font3);
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_7->addWidget(label_8);

        label_9 = new QLabel(frame_2);
        label_9->setObjectName("label_9");
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);
        label_9->setFont(font3);
        label_9->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout_7->addWidget(label_9);


        verticalLayout_8->addLayout(verticalLayout_7);


        gridLayout->addWidget(frame_2, 3, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuMenu = new QMenu(menubar);
        menuMenu->setObjectName("menuMenu");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuMenu->menuAction());
        menuMenu->addAction(action);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "SPG", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\270\321\201\320\272 \320\277\320\276 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\321\216 \321\201\320\260\320\271\321\202\320\260", nullptr));
        lineEdit_4->setText(QString());
        lineEdit_4->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\274\320\265\321\200: yandex", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\276\320\264 \320\275\320\276\320\262\321\213\321\205 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \321\201\320\260\320\271\321\202\320\260", nullptr));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        lineEdit_3->setText(QString());
        lineEdit_3->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\221\321\203\320\272\320\262 \320\261\320\276\320\273\321\214\321\210\320\265 5", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\225\321\201\321\202\321\214 \320\267\320\260\320\263\320\273\320\260\320\262\320\275\320\260\321\217 \320\261\321\203\320\272\320\262\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\225\321\201\321\202\321\214 \321\201\320\270\320\274\320\262\320\276\320\273\321\213", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\225\321\201\321\202\321\214 \321\206\320\270\321\204\321\200\321\213", nullptr));
        checkBox->setText(QString());
        checkBox_2->setText(QString());
        checkBox_3->setText(QString());
        checkBox_4->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\223\320\265\320\275\320\265\321\200\320\260\321\202\320\276\321\200 \320\277\320\260\321\200\320\276\320\273\320\265\320\271", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\222\320\265\321\200\321\201\320\270\321\217 0.0.0", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\236\321\200\320\263\320\260\320\275\320\270\320\267\320\260\321\206\320\270\321\217", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\207\321\202\320\260", nullptr));
        menuMenu->setTitle(QCoreApplication::translate("MainWindow", "\320\234\320\265\320\275\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
