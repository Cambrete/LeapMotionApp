
#include "lmchandler.h"

LMCHandler::LMCHandler()
{
    controller = new Leap::Controller();
}

bool LMCHandler::Initialize()
{
    return controller->isConnected();
}

void LMCHandler::Configure()
{
    collectorWorker.moveToThread(collectorThread);
}

