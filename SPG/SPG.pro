QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++20

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

# VERSION = 0.0.0.7
# QMAKE_TARGET_COMPANY = NaN
# QMAKE_TARGET_PRODUCT = SPG
# QMAKE_TARGET_DESCRIPTION = SPG - Storage Password Generation

TARGET = SPG
TEMPLATE = app

SOURCES += \
    classPasswordGeneration.cpp \
    main.cpp \
    mainwindow.cpp \
    passwordGenerator.cpp

HEADERS += \
    classPasswordGeneration.h \
    mainwindow.h \
    passwordGenerator.h

FORMS += \
    mainwindow.ui \
    passwordGenerator.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RC_ICONS = passMenag.ico
RESOURCES += \
    resourse.qrc
