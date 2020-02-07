#include "CabSelection.h"
#include <vector>
#include <string>

using namespace std;

ICab* PuneriCabSelectionService::SelectCab(string ctype)
{
    vector<ICab*>availableCabs = cabDB->getCabs(ctype);

    //TODO: Processing on the basis of selection
    if (availableCabs.empty())
        return nullptr;
    else
        return availableCabs[0];
}

vector<ICab*> CabDatabase::getCabs(string ctype)
{
    vector<ICab*> specificCabs;

    for (auto itr : allCabs)
    {
        if (itr->getCabType().compare(string(ctype)))
        {
            specificCabs.push_back(itr);
        }
    }

    return specificCabs;
}
