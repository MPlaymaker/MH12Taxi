#pragma once
#include <vector>
#include <string>
#include "ICab.h"

class Location;
class CabDatabase
{
private:
    std::vector<ICab*> allCabs;
public:
    CabDatabase() : allCabs({}) {}
    void InsertCab(ICab* cabObj)
    {
        allCabs.push_back(cabObj);
    }

    void DeleteCab(ICab* cabObj)
    {
        allCabs.erase(std::find(allCabs.begin(), allCabs.end(), cabObj));
    }

    vector<ICab*> getCabs(string ctype)
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
    
    std::vector<std::string> getCabTypes(Location* loc)
    {
        std::vector<std::string> types;

        for (auto itr : allCabs)
        {
            if (std::find(types.begin(), types.end(), itr->getCabType()) != types.end())
            {
                types.push_back(itr->getCabType());
            }
        }

        return types;
    }
};
