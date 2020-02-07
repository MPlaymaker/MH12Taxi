#include <string>
#include "ILocationService.h"
// x, y coordinates of location on map
class Location
{
public:
  double x;
  double y;
};


class LocationService : ILocationService
{
private:
  /* data */
public:
  LocationService(/* args */);
  ~LocationService();
  Location GetLocation(std::string address);
  double CalculateDistance(Location start, Location end);
};

LocationService::LocationService(/* args */)
{
}

LocationService::~LocationService()
{
}
