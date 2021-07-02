QT += core gui
QT += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11 console

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        MainWindow.cpp \
        avtoriz.cpp \
        main.cpp\
        levelA.cpp \
        levelB.cpp\
        levelC.cpp\
        TESTabc.cpp\
        menu.cpp\
        achiv.cpp \
        user.cpp

HEADERS += \
    MainWindow.h \
    avtoriz.h \
    levelA.h\
    levelB.h\
    levelC.h\
    TESTabc.h\
    menu.h\
    achiv.h \
    user.h

FORMS += \
    MainWindow.ui \
    avtoriz.ui\
    levelA.ui\
    levelB.ui\
    menu.ui\
    levelC.ui\
    TESTabc.ui\
    achiv.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
