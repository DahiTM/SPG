/********************************************************************************
** Form generated from reading UI file 'passwordGenerator.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASSWORDGENERATOR_H
#define UI_PASSWORDGENERATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PasswordGenerator
{
public:
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpinBox *spinBox;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QCheckBox *checkBox;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *PasswordGenerator)
    {
        if (PasswordGenerator->objectName().isEmpty())
            PasswordGenerator->setObjectName("PasswordGenerator");
        PasswordGenerator->resize(309, 182);
        PasswordGenerator->setMinimumSize(QSize(309, 182));
        PasswordGenerator->setMaximumSize(QSize(309, 182));
        gridLayout_2 = new QGridLayout(PasswordGenerator);
        gridLayout_2->setObjectName("gridLayout_2");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        frame = new QFrame(PasswordGenerator);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(191, 41));
        frame->setMaximumSize(QSize(191, 41));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");
        QFont font;
        font.setPointSize(10);
        font.setBold(false);
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);


        horizontalLayout_3->addWidget(frame);

        pushButton = new QPushButton(PasswordGenerator);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(41, 41));
        pushButton->setMaximumSize(QSize(41, 41));

        horizontalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(PasswordGenerator);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(41, 41));
        pushButton_2->setMaximumSize(QSize(41, 41));

        horizontalLayout_3->addWidget(pushButton_2);


        gridLayout_2->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(verticalSpacer, 3, 0, 1, 1);

        label = new QLabel(PasswordGenerator);
        label->setObjectName("label");
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label->setFont(font1);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(PasswordGenerator);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(127, 0));
        label_3->setMaximumSize(QSize(127, 16777215));
        label_3->setFont(font1);

        horizontalLayout_2->addWidget(label_3);

        spinBox = new QSpinBox(PasswordGenerator);
        spinBox->setObjectName("spinBox");
        spinBox->setMinimumSize(QSize(76, 26));
        spinBox->setMaximumSize(QSize(72, 26));
        QFont font2;
        font2.setPointSize(10);
        spinBox->setFont(font2);
        spinBox->setMinimum(8);
        spinBox->setMaximum(20);

        horizontalLayout_2->addWidget(spinBox);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_4 = new QLabel(PasswordGenerator);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        checkBox = new QCheckBox(PasswordGenerator);
        checkBox->setObjectName("checkBox");
        checkBox->setChecked(true);

        gridLayout->addWidget(checkBox, 0, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);


        gridLayout_2->addLayout(verticalLayout, 4, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 1, 0, 1, 1);


        retranslateUi(PasswordGenerator);

        QMetaObject::connectSlotsByName(PasswordGenerator);
    } // setupUi

    void retranslateUi(QWidget *PasswordGenerator)
    {
        PasswordGenerator->setWindowTitle(QCoreApplication::translate("PasswordGenerator", "\320\223\320\265\320\275\320\265\321\200\320\260\321\202\320\276\321\200 \320\277\320\260\321\200\320\276\320\273\320\265\320\271", nullptr));
        label_2->setText(QCoreApplication::translate("PasswordGenerator", "\320\277\320\260\321\200\320\276\320\273\321\214", nullptr));
        pushButton->setText(QCoreApplication::translate("PasswordGenerator", "\320\232\320\276\320\277", nullptr));
        pushButton_2->setText(QCoreApplication::translate("PasswordGenerator", "\320\236\320\261\320\275\320\276\320\262", nullptr));
        label->setText(QCoreApplication::translate("PasswordGenerator", "\320\237\320\260\321\200\320\276\320\273\321\214:", nullptr));
        label_3->setText(QCoreApplication::translate("PasswordGenerator", "\320\224\320\273\320\270\320\275\320\260 \320\277\320\260\321\200\320\276\320\273\321\217:", nullptr));
        label_4->setText(QCoreApplication::translate("PasswordGenerator", "\320\241\320\277\320\265\321\206\320\270\320\260\320\273\321\214\320\275\321\213\320\265 \321\201\320\270\320\274\320\262\320\276\320\273\321\213", nullptr));
        checkBox->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PasswordGenerator: public Ui_PasswordGenerator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASSWORDGENERATOR_H
