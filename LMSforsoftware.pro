#-------------------------------------------------
#
# Project created by QtCreator 2018-11-15T08:16:25
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LMSforsoftware
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        mainwindow.cpp \
    main.cpp \
    register.cpp \
    search.cpp \
    adminmanagment.cpp \
    studentpage.cpp \
    modify.cpp \
    change.cpp

HEADERS += \
        mainwindow.h \
    register.h \
    search.h \
    adminmanagment.h \
    studentpage.h \
    change.h \
    modify.h \
    change.h

FORMS += \
        mainwindow.ui \
    register.ui \
    search.ui \
    adminmanagment.ui \
    studentpage.ui \
    change.ui \
    modify.ui \
    change.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

SUBDIRS += \
    Register.pro
