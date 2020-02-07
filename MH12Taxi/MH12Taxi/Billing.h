#pragma once
#include<string>
#include "ILocationService.h"
#include "ICab.h"
using namespace std;
class Location;
class ICab;

class Bill
{
public:
    Bill();
    double fare;
    string status;
    double penalty;
};

class BillingService
{

public:
    Bill* calculateFare(Trip& trip, ILocationService* locser);
 
};
