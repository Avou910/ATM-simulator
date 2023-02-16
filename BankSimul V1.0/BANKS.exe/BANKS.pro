QT       += core gui serialport multimedia multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

TARGET = BANKS
TEMPLATE = app

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

DEFINES += QT_DEPRECATED_WARNINGS

SOURCES += \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    mainwindow.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
 INSTALLS += target







win32: LIBS += -L$$PWD/'../DLL kansio/build-dllpincode-Desktop_Qt_5_15_2_MinGW_32_bit-Debug/debug/' -ldllpincode

INCLUDEPATH += $$PWD/'../DLL kansio/dllpincode'
DEPENDPATH += $$PWD/'../DLL kansio/dllpincode'

win32: LIBS += -L$$PWD/'../DLL kansio/build-Dllsql-Desktop_Qt_5_15_2_MinGW_32_bit-Debug/debug/' -lDllsql

INCLUDEPATH += $$PWD/'../DLL kansio/Dllsql'
DEPENDPATH += $$PWD/'../DLL kansio/Dllsql'
