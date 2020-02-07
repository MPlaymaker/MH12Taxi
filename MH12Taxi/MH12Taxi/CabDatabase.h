#pragma once
#include <vector>
#include <string>

class ICab;
class CabDatabase
{
private:
    std::vector<ICab*> allCabs;
public:
    CabDatabase() : allCabs({}) {}
    std::vector<ICab*> getCabs(std::string ctype);
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
};
