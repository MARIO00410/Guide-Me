QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    add.cpp \
    bfs.cpp \
    data.cpp \
    delete.cpp \
    functions.cpp \
    edgeitem.cpp \
    homepage.cpp \
    info.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    nodeitem.cpp \
    profle.cpp \
    dfs.cpp \
    path.cpp \
    readgraph.cpp \
    signup.cpp \
    update_transportation.cpp \
    user.cpp

HEADERS += \
    add.h \
    bfs.h \
    delete.h \
    functions.h \
    edgeitem.h \
    nodeitem.h \
    readgraph.h \
    update_transportation.h \
    user.h \
    data.h \
    homepage.h \
    info.h \
    login.h \
    mainwindow.h \
    profle.h \
    dfs.h \
    path.h \
    signup.h

FORMS += \
    add.ui \
    bfs.ui \
    delete.ui \
    functions.ui \
   signup.ui \
    homepage.ui \
    info.ui \
    dfs.ui \
    login.ui \
    mainwindow.ui \
    profle.ui \
    update_transportation.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
