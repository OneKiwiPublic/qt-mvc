#include "InfoController.h"
#include <qpushbutton.h>

InfoController::InfoController()
{
    mView = new InfoDialog();
    mModel = new InfoModel();

    connect(mView->button, &QPushButton::released, this, &InfoController::getData);
}

InfoController::~InfoController()
{

}

void InfoController::showDialog(){
    mView->setModal(true);
    mView->show();
}

void InfoController::getData2Main(QString data){
    mView->setLabel(data);
}

void InfoController::getData(){
    mView->setLabel("button");
}
