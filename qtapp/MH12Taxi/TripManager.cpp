#include "TripManager.h"
#include <iostream>

using namespace std;


TripManager::TripManager()
{
}


TripManager::~TripManager()
{
}

void TripManager::processCabSelection()
{
	std::cout << "Cab Selection....." << endl;
	//Create instance of Cab Selection service

}

void TripManager::processBilling()
{
	std::cout << "Billing....." << endl;
}

void TripManager::processPayment()
{
    std::cout << "Payment....." << endl;
}

Trip *TripManager::createTrip()
{
    m_trips.push_back(new Trip());

    return m_trips.back();
}

Trip* TripManager::GetCurrentTrip()
{
    return m_trips.back();
}

void TripManager::processLocationService()
{
	std::cout << "location....." << endl;
	//Create instance of Location Selection service

	//Get current location // store in trip

	//Get drop location // store in trip

	//Calculate distance and store
}


