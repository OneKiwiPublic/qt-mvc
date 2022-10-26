#ifndef INFODIALOG_H
#define INFODIALOG_H

#include <QDialog>

namespace Ui {
class InfoDialog;
}

class InfoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit InfoDialog(QWidget *parent = nullptr);
    ~InfoDialog();

    void setLabel(QString data);

public:
    QPushButton *button;

private:
    Ui::InfoDialog *ui;
};

#endif // INFODIALOG_H
