#include "mymain.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MyMain w;
    w.show();
    return a.exec();
}
