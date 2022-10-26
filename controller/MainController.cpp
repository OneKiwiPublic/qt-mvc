#include "MainController.h"
#include "controller/InfoController.h"

MainController::MainController()
{
    mView = new MainForm();
    mModel = new MainModel();

    connect(mView->button, SIGNAL(clicked()), this, SLOT(openDialog()));
}

MainController::~MainController()
{

}

void MainController::show(){
    mView->show();
}

void MainController::openDialog(){
    qDebug() << "open Dialog";
    InfoController controller;
    controller.showDialog();
}

