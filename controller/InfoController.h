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
};

#endif // INFOCONTROLLER_H
