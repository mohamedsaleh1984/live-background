#pragma once
#ifndef __LIVE_BACKGROUND_SERVICE_H
#define __LIVE_BACKGROUND_SERVICE_H

#include "Global.h"
#include <iostream>
#include <string>
using namespace std;

enum ServiceStatus
{
    running,
    stopped,
    not_created,
    created
};

class LiveBackgroundService
{
public:
    LiveBackgroundService();
    ServiceStatus getStatus();
    void createInstance();
    void run();
    void stop();
    void *getHandle();
private:
    ServiceStatus status;
};

#endif