#-------------------------------------------------
#
# Project created by QtCreator 2017-05-21T12:28:34
#
#-------------------------------------------------

QT       += core gui sql
RC_FILE = libpro.rc
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LIBPRO
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


SOURCES += main.cpp\
    admin.cpp \
    librarian.cpp \
    reader.cpp \
    mainwindow.cpp \
    signup.cpp \
    signin.cpp \
    home.cpp \
    noiquy.cpp \
    edituser.cpp

HEADERS  += \
    databaseconnection.h \
    admin.h \
    librarian.h \
    reader.h \
    mainwindow.h \
    signup.h \
    signin.h \
    home.h \
    noiquy.h \
    edituser.h

FORMS    += \
    admin.ui \
    librarian.ui \
    reader.ui \
    mainwindow.ui \
    signup.ui \
    signin.ui \
    home.ui \
    noiquy.ui \
    edituser.ui

RESOURCES += \
    src.qrc \
    src.qrc

DISTFILES += \
    images/iconwindow.ico
