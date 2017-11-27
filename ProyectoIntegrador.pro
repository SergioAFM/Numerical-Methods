#-------------------------------------------------
#
# Project created by QtCreator 2017-11-24T14:52:15
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ProyectoIntegrador
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        proyecto.cpp \
    biseccion.cpp \
    pfijo.cpp \
    newtonr.cpp \
    egauss.cpp \
    gseidel.cpp \
    interl.cpp \
    regresionl.cpp \
    rmultiple.cpp \
    difnu.cpp \
    integracion.cpp \
    euler.cpp \
    rk.cpp

HEADERS += \
        proyecto.h \
    biseccion.h \
    pfijo.h \
    newtonr.h \
    egauss.h \
    gseidel.h \
    interl.h \
    regresionl.h \
    rmultiple.h \
    difnu.h \
    integracion.h \
    euler.h \
    rk.h

FORMS += \
        proyecto.ui \
    biseccion.ui \
    pfijo.ui \
    newtonr.ui \
    egauss.ui \
    gseidel.ui \
    interl.ui \
    regresionl.ui \
    rmultiple.ui \
    difnu.ui \
    integracion.ui \
    euler.ui \
    rk.ui
