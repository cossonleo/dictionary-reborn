#-------------------------------------------------
#
# Project created by QtCreator 2017-07-31T21:42:42
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = dictionary-reborn
TEMPLATE = app
CONFIG += c++11

SOURCES += main.cpp\
        main_window.cpp \
    left_widget.cpp \
    right_widget.cpp \
    utils.cpp

HEADERS  += main_window.h \
    left_widget.h \
    right_widget.h \
    utils.h

RESOURCES += resources.qrc
