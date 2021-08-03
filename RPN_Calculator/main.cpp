#include "RPN_Calculator.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    RPN_Calculator w;
    w.show();
    return a.exec();
}
