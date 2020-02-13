#pragma once
#include "ILocationService.h"
#include "time.h"
#include <string>

class ICab;

class Trip
{
public:
    Location startlocation;
    Location endlocation;
    time_t startTime;
    time_t endTime;
    time_t paymentTime;
    std::string paymentMode;
	ICab* cab;
};
