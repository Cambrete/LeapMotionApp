
#include "collectorworker.h"

CollectorWorker::CollectorWorker(Controller* leapController) : controller(leapController)
{

}

Frame CollectorWorker::GetFrame()
{
    return controller->frame();
}

void CollectorWorker::on_initialize()
{

}

