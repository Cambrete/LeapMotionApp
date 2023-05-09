
#include "lmchandler.h"

#include <QCoreApplication>
#include <stdio.h>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    LMCHandler handler;

    bool Initialized = false;
    int count = 0;
    do {
        Initialized = handler.Initialize();
        count = count + 1;
    }while (!Initialized);

    qInfo() << "Device Initialized: " << Initialized << count;

    std::cout << "Press Enter to quit..." << std::endl;
    std::cin.get();

    return a.exec();
}
