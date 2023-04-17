#ifndef LMCHANDLER_H
#define LMCHANDLER_H

#include "Leap.h"

using namespace Leap;

class LMCHandler
{
public:
    LMCHandler();
    bool Initialize();
    void Configure();

protected:
    bool hasInitialized = false;
    bool hasConfigured = false;

private:
    Controller* controller = nullptr;

};

#endif // LMCHANDLER_H
