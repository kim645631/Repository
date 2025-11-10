#include "window.h"
#include <QWidget>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QMainWindow w1,w2;
    w1.move(1,0);
    w1.show();
    w2.move(300,0);
    w2.show();
    return a.exec();
}
