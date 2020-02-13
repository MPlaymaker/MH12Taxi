#include "ILocationService.h"
#include "LocationService.h"
#include <random>
#include <time.h>
#include <qdebug.h>

LocationService::LocationService(/* args */)
{
}

LocationService::~LocationService()
{
}

Location LocationService::GetLocation(std::string address)
{
    // Get location from Google Maps (3rd party service)
    srand(time(NULL));
    Location loc;
    loc.x = rand();
    loc.y = rand();

    loc.m_address = address;

    return loc;
}

double LocationService::CalculateDistance(Location start, Location end)
{
  // returns distance between start & end locations
  // for now return random distance

  double lower_bound = start.x;
  double upper_bound = end.x;
  std::uniform_real_distribution<double> unif(lower_bound,upper_bound);
  std::default_random_engine re;
  double a_random_double = unif(re);

  return a_random_double;

}

bool LocationService::IsInVicinity(Location start, Location end)
{
    qDebug() << "Pickup: " << start.m_address.c_str() << "\n";
    qDebug() << "Drop: " << end.m_address.c_str() << "\n";

    return true;
}
