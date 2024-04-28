QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    data.cpp \
    homepage.cpp \
    info.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    profle.cpp \
    signup.cpp \
    user.cpp

HEADERS += \
    data.h \
    homepage.h \
    info.h \
    login.h \
    mainwindow.h \
    profle.h \
    signup.h \
    user.h

FORMS += \
    homepage.ui \
    info.ui \
    login.ui \
    mainwindow.ui \
    profle.ui \
    signup.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
