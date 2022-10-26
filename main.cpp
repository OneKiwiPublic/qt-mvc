#include "controller/MainController.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainController controller;
    controller.show();

    return a.exec();
}
