#pragma once
#include "ICabSelectionService.h"
#include "ILocationService.h"

class TripManager
{
public:
	TripManager();
	~TripManager();

	void processLocationService();
	void processCabSelection();
	void processBilling();
	void processPayment();

private:
	ICabSelectionService* m_CabSelectionService = nullptr;
	ILocationService* m_LocationService = nullptr;
	
};

