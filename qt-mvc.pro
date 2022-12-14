QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    controller/InfoController.cpp \
    controller/MainController.cpp \
    main.cpp \
    model/InfoModel.cpp \
    model/MainModel.cpp \
    network/ApiLCSC.cpp \
    network/HttpRequest.cpp \
    view/InfoDialog.cpp \
    view/MainForm.cpp

HEADERS += \
    controller/InfoController.h \
    controller/MainController.h \
    model/InfoModel.h \
    model/MainModel.h \
    network/ApiLCSC.h \
    network/HttpRequest.h \
    view/InfoDialog.h \
    view/MainForm.h

FORMS += \
    form/MainForm.ui \
    form/InfoDialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
