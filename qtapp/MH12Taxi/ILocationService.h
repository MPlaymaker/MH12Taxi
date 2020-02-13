
#pragma once
#include <string>

// x, y coordinates of location on map
class Location
{
public:
  double x;
  double y;
  std::string m_address;
};

class ILocationService
{
public:
    virtual Location GetLocation(std::string addr) = 0;
    virtual double CalculateDistance(Location from, Location to) = 0;
    virtual bool IsInVicinity(Location start, Location end) = 0;
    virtual ~ILocationService() = default;
};

