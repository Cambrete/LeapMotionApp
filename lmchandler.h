#ifndef LMCHANDLER_H
#define LMCHANDLER_H

#include <QObject>
#include <QThread>

#include "collectorworker.h"
#include "dataprocessorworker.h"
#include "Leap.h"

using namespace Leap;

class LMCHandler : public QObject
{
    Q_OBJECT
public:
    LMCHandler();
    bool Initialize();
    void CreateThreads();
    void Start();

protected:
    bool hasInitialized = false;
    bool hasConfigured = false;

private:
    Controller* controller = nullptr;

    QThread* collectorThread = nullptr;
    QThread* dataprocessorThread = nullptr;
    CollectorWorker* collectorWorker = nullptr;
    DataProcessorWorker* dataprocessorWorker = nullptr;


};

#endif // LMCHANDLER_H
