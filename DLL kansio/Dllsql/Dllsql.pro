QT += sql

TARGET = Dllsql

TEMPLATE = lib
DEFINES += DLLSQL_LIBRARY

DEFINES += QT_DEPRECATED_WARNINGS


CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dllsql.cpp \
    sqlengine.cpp

HEADERS += \
    Dllsql_global.h \
    dllsql.h \
    sqlengine.h

# Default rules for deployment.
unix {
    target.path = /usr/lib
}
INSTALLS += target
