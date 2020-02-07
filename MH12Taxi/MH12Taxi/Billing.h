#pragma once
#include<string>
#include "CabSelection.h"
#include "ILocationService.h"
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
