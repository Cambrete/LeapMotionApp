
#ifndef DATAPROCESSORWORKER_H
#define DATAPROCESSORWORKER_H

#include <QObject>

#include "Leap.h"


class DataProcessorWorker : public QObject
{
    Q_OBJECT
public:
    DataProcessorWorker(Leap::Controller* controller);
private:
    Leap::Controller* controller;

public slots:
    void on_initialize();
};

#endif // DATAPROCESSORWORKER_H
