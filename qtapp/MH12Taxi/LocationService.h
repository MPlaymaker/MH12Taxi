#pragma once
#include "ILocationService.h"

class LocationService : public ILocationService
{
private:
  /* data */
public:
  LocationService(/* args */);
  ~LocationService();
  Location GetLocation(std::string address) override;
  double CalculateDistance(Location start, Location end) override;
  bool IsInVicinity(Location start, Location end) override;
};




