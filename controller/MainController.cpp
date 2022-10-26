#include "MainController.h"
#include "controller/InfoController.h"

MainController::MainController()
{
    mView = new MainForm();
    mModel = new MainModel();

    connect(mView->button, &QPushButton::clicked, this, &MainController::openDialog);
}

MainController::~MainController()
{

}

void MainController::show(){
    mView->show();
}

void MainController::openDialog(){
    qDebug() << "open Dialog";
    InfoController *controller;
    controller = new InfoController();
    controller->showDialog();
    connect(this, &MainController::sendData2Dialog, controller, &InfoController::getData2Main);
    emit sendData2Dialog("van son");



}

