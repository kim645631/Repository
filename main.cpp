#include "window.h"

#include <QApplication>

#include <QApplication>
#include <QMainWindow>
#include <QScreen>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QMainWindow *w1 = new QMainWindow;
    w1->setWindowTitle("Window 1");
    w1->resize(480, 320);

    QMainWindow *w2 = new QMainWindow;
    w2->setWindowTitle("Window 2");
    w2->resize(480, 320);

    w1->show();


    int gap = 10;
    QRect geom1 = w1->frameGeometry();
    QPoint posForW2(geom1.topRight().x() + gap, geom1.topRight().y());
    w2->move(posForW2);
    w2->show();


    return app.exec();
}
