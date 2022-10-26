#ifndef MAINCONTROLLER_H
#define MAINCONTROLLER_H

#include <QObject>

#include "view/MainForm.h"
#include "model/MainModel.h"

class MainController : public QObject
{
    Q_OBJECT
    MainForm * mView;
    MainModel * mModel;

public:
    MainController();
    ~MainController();

signals:
    void openDialogEvent();
    void sendData2Dialog(QString data);

public slots:
    void show();
    void openDialog();
};

#endif // MAINCONTROLLER_H
