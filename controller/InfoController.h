#ifndef INFOCONTROLLER_H
#define INFOCONTROLLER_H

#include <QObject>
#include "view/InfoDialog.h"
#include "model/InfoModel.h"

class InfoController : public QObject
{
    Q_OBJECT

    InfoDialog * mView;
    InfoModel * mModel;

public:
    InfoController();
    ~InfoController();

    void showDialog();


public slots:
    void getData2Main(QString data);

};

#endif // INFOCONTROLLER_H
