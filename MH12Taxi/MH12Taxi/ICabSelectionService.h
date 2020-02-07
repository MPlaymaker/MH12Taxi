#pragma once
#include <string>
#include <vector>
#include "CabDatabase.h"

class CabDatabase;

typedef std::vector<std::string> CabTypes;
class ICab;
class ICabSelectionService
{
public:
    virtual ICab* SelectCab(std::string ctype) = 0;
    virtual CabTypes GetCabTypes() = 0;
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

    CabTypes GetCabTypes()
    {
        return { "Mini", "Prime", "Sedan" };
    }

    ICab* SelectCab(std::string ctype)
    {
        vector<ICab*>availableCabs = cabDB->getCabs(ctype);

        //TODO: Processing on the basis of selection
        if (availableCabs.empty())
            return nullptr;
        else
            return availableCabs[0];
    }
};
