#include "LiveBackgroundService.h"
#include <iostream>
#include "Global.h"

LiveBackgroundService::LiveBackgroundService()
{
}

ServiceStatus LiveBackgroundService::getStatus()
{
    return this->status;
}
void LiveBackgroundService::createInstance()
{
    this->status = created;
}

void LiveBackgroundService::run()
{
    this->status = running;
}
void LiveBackgroundService::stop()
{
    this->status = stopped;
}
void *LiveBackgroundService::getHandle()
{
    return nullptr;
}
