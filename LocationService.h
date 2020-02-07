#include <string>

// x, y coordinates of location on map
class Location
{
public:
  double x;
  double y;
};


class LocationService
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
