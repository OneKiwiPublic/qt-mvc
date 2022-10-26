#include "InfoDialog.h"
#include "ui_InfoDialog.h"

InfoDialog::InfoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InfoDialog)
{
    ui->setupUi(this);
    button = ui->button;
}

InfoDialog::~InfoDialog()
{
    delete ui;
}

void InfoDialog::setLabel(QString data){
    ui->label->setText(data);
}
