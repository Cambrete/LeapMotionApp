
#include <QCoreApplication>
#include <stdio.h>
#include "Leap.h"

using namespace Leap;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    qInfo() << "HOLA MUNDO";

    return a.exec();
}
