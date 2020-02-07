#pragma once
#include<string>
#include "CabSelection.h"

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
Bill::Bill() :fare(0), status("Not Paid"), penalty(0)
{
}

class ILocationService
{
public:
    virtual Location GetLocation(string addr) = 0;
    virtual double CalculateDistance(string from, string to) = 0;
};


class Trip
{
public:
    string startlocation;
    string endlocation;
    string startTime;
    string endTime;
    string paymentTime;
    string paymentMode;
    ICab* cab;
};
class BillingService
{

public:
    Bill* calculateFare(Trip& trip, ILocationService* locser);
 
};
