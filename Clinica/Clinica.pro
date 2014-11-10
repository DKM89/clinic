#-------------------------------------------------
#
# Project created by QtCreator 2014-11-10T12:04:04
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Clinica
TEMPLATE = app


SOURCES += main.cpp\
        ventanainicial.cpp \
    sqlite.cpp \
    ventanapacientes.cpp

HEADERS  += ventanainicial.h \
    sqlite.h \
    ventanapacientes.h

FORMS    += ventanainicial.ui \
    ventanapacientes.ui
