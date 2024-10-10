QT -= gui

TEMPLATE = lib
DEFINES += PROJECTA_LIBRARY

CONFIG += c++11

SOURCES += \
    baseclass.cpp \
    derivedclass.cpp \
    furtherderivedclass.cpp

HEADERS += \
    baseclass.h \
    derivedclass.h \
    furtherderivedclass.h

RESOURCES += \
    qml.qrc
