QT += widgets

TARGET = dllpincode

TEMPLATE = lib
DEFINES += DLLPINCODE_LIBRARY

DEFINES += QT_DEPRECATED_WARNINGS

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    dialog.cpp \
    dllpincode.cpp

HEADERS += \
    dialog.h \
    dllpincode_global.h \
    dllpincode.h

# Default rules for deployment.
unix {
    target.path = /usr/lib

INSTALLS += target
}

FORMS += \
    dialog.ui
