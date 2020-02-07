#include "LocationService.h"
#include <random>

Location LocationService::GetLocation(std::string address)
{
    // Get location from Google Maps (3rd party service)
    srand(time(NULL));
    Location loc;
    loc.x = rand();
    loc.y = rand();
    return loc;
}

double LocationService::CalculateDistance(Location start, Location end)
{
  // returns distance between start & end locations
  // for now return random distance

  double lower_bound = 0;
  double upper_bound = 10000;
  std::uniform_real_distribution<double> unif(lower_bound,upper_bound);
  std::default_random_engine re;
  double a_random_double = unif(re);

  return a_random_double;

}
