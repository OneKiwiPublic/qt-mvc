#ifndef MAINFORM_H
#define MAINFORM_H

#include <QMainWindow>
#include <QPushButton>


QT_BEGIN_NAMESPACE
namespace Ui { class MainForm; }
QT_END_NAMESPACE

class MainForm : public QMainWindow
{
    Q_OBJECT

public:
    MainForm(QWidget *parent = nullptr);
    ~MainForm();

public:
    QPushButton *button;

private:
    Ui::MainForm *ui;
};
#endif // MAINFORM_H
