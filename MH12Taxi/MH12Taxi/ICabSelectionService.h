#pragma once
#include <string>
#include <vector>
#include "CabDatabase.h"

class Location;
class CabDatabase;

typedef std::vector<std::string> CabTypes;
class ICab;
class ICabSelectionService
{
public:
    virtual ICab* SelectCab(std::string ctype) = 0;
    virtual CabTypes GetCabTypes(Location* loc) = 0;
};

class PuneriCabSelectionService : public ICabSelectionService
{
private:
    CabDatabase* cabDB;

public:
    PuneriCabSelectionService()
    {
        this->cabDB = new CabDatabase;
    }

    CabTypes GetCabTypes(Location* loc)
    {
        return cabDB->getCabTypes(loc);
    }

    ICab* SelectCab(std::string ctype)
    {
        std::vector<ICab*> availableCabs = cabDB->getCabs(ctype);

        //TODO: Processing on the basis of selection
        if (availableCabs.empty())
            return nullptr;
        else
            return availableCabs[0];
    }
};
