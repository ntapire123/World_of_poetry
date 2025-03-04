QT += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = poetry
TEMPLATE = app

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    login.cpp \
    register.cpp \
    landingpage.cpp \
    writepoem.cpp \
    readpoem.cpp \
    editpoem.cpp \
    viewpoem.cpp

HEADERS += \
    mainwindow.h \
    login.h \
    register.h \
    landingpage.h \
    writepoem.h \
    readpoem.h \
    editpoem.h \
    viewpoem.h

FORMS += \
    mainwindow.ui \
    login.ui \
    register.ui \
    landingpage.ui \
    writepoem.ui \
    readpoem.ui \
    editpoem.ui \
    viewpoem.ui

RESOURCES += \
    Images.qrc
