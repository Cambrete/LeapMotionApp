
#ifndef COLLECTORWORKER_H
#define COLLECTORWORKER_H

#include <QObject>

#include "Leap.h"

using namespace Leap;

class CollectorWorker : public QObject
{
    Q_OBJECT
public:
    CollectorWorker(Controller *leapController);
    Frame GetFrame();

private:
    Controller* controller;

public slots:
    void on_initialize();
};

#endif // COLLECTORWORKER_H
