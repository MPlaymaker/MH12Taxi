#pragma once
//#include "ICabSelectionService.h"
#include "ILocationService.h"
#include <Trip.h>
#include <vector>

class TripManager
{
public:

	~TripManager();

	void processLocationService();
	void processCabSelection();
	void processBilling();
	void processPayment();

    Trip* createTrip();
    Trip *GetCurrentTrip();

    static TripManager* GetTripManager()
    {
        static TripManager* s_pTM(nullptr);
        if(!s_pTM)
        {
           s_pTM = new TripManager();
        }

        return s_pTM;
    }


private:
    //ICabSelectionService* m_CabSelectionService = nullptr;
	ILocationService* m_LocationService = nullptr;
    std::vector<Trip*> m_trips;
    TripManager();
};

