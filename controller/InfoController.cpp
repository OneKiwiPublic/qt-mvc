#include "InfoController.h"

InfoController::InfoController()
{
    mView = new InfoDialog();
    mModel = new InfoModel();
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
