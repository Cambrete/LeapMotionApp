
#include "lmchandler.h"

LMCHandler::LMCHandler()
{
    controller = new Leap::Controller();
}

bool LMCHandler::Initialize()
{
    return controller->isConnected();
}

void LMCHandler::CreateThreads()
{
    collectorThread = new QThread(this);
    collectorWorker = new CollectorWorker(controller);
    connect(collectorThread, &QThread::started, collectorWorker, &CollectorWorker::on_initialize);
    /**
     * Create connects
     *
     *
     * */
    connect(collectorThread, &QThread::finished, collectorThread, &QThread::deleteLater);
    collectorWorker->moveToThread(collectorThread);

    dataprocessorThread = new QThread(this);
    dataprocessorWorker = new DataProcessorWorker(controller);
    connect(dataprocessorThread, &QThread::started, dataprocessorWorker, &DataProcessorWorker::on_initialize);
    /**
     * Create connects
     *
     *
     * */
    connect(dataprocessorThread, &QThread::finished, collectorThread, &QThread::deleteLater);
    dataprocessorWorker->moveToThread(dataprocessorThread);
}

void LMCHandler::Start()
{
    collectorThread->start();
}

