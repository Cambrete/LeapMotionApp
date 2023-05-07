#ifndef LMCHANDLER_H
#define LMCHANDLER_H

#include <QObject>
#include <QThread>

#include "collectorworker.h"
#include "Leap.h"

using namespace Leap;

class LMCHandler : public QObject
{
    Q_OBJECT
public:
    LMCHandler();
    bool Initialize();
    void Configure();

protected:
    bool hasInitialized = false;
    bool hasConfigured = false;

private:
    Controller* controller = nullptr;

    QThread *collectorThread = nullptr;
    CollectorWorker collectorWorker;

};

#endif // LMCHANDLER_H
