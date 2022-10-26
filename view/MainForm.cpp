#include "MainForm.h"
#include "ui_MainForm.h"

MainForm::MainForm(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainForm)
{
    ui->setupUi(this);
    button = ui->button;
}

MainForm::~MainForm()
{
    delete ui;
}

