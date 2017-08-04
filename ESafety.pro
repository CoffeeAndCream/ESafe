#-------------------------------------------------
#
# Project created by QtCreator 2017-07-28T09:28:44
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ESafety
TEMPLATE = app

QMAKE_CXXFLAGS += -isystem $$[QT_INSTALL_HEADERS]

SOURCES += main.cpp\
        mainwindow.cpp \
    turtle.cpp \
    safetywindow.cpp

HEADERS  += mainwindow.h \
    turtle.h \
    safetywindow.h

FORMS    += mainwindow.ui \
    safetyform.ui \
    screencover.ui

RESOURCES += \
    safety_images.qrc
