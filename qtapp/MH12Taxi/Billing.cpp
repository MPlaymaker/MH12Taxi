#include "Billing.h"
double parseSring(time_t t)
{
    // To be implemented
    return 0;
}

Bill::Bill() :fare(0), status("Not Paid"), penalty(0)
{
}

Bill* BillingService::calculateFare(Trip& trip, ILocationService* locser)
{
    Bill* obj = new Bill();
    double dist = locser->CalculateDistance(trip.startlocation, trip.endlocation);
    // Fare calculation
    obj->fare = trip.cab->getBaseRate() + trip.cab->getPerKMRate() * dist + (parseSring(trip.endTime) - parseSring(trip.startTime)) * trip.cab->getPerHrate();

    return obj;
}
