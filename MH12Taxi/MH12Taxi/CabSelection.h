#pragma once
//CabSelectionService

#include <vector>
#include <string>

using namespace std;

typedef std::vector<string> CabTypes;

class LocationService;

class ICab
{
protected:
    string regNumber;
    string cabtype;

public:
    virtual double getBaseRate() = 0;
    virtual double getPerKMRate() = 0;
    virtual double getPerHrate() =0;
    string getRegistrationNo() { return regNumber; }
    string getCabType() { return cabtype; }
};

class PrimeCab : ICab
{
public:
    virtual double getBaseRate() override
    {
        return 70;
    }

    virtual double getPerKMRate() override
    {
        return 7;
    }
    virtual double getPerHrate()
    {
        return 10;
    }
};

class MiniCab : ICab
{
public:
    virtual double getBaseRate() override
    {
        return 60;
    }

    virtual double getPerKMRate() override
    {
        return 6;
    }
    virtual double getPerHrate()
    {
        return 5;
    }
};

class SedanCab : ICab
{
public:
    virtual double getBaseRate() override
    {
        return 80;
    }

    virtual double getPerKMRate() override
    {
        return 8;
    }
    virtual double getPerHrate()
    {
        return 20;
    }
};

class ICabSelectionService
{
public:
    virtual ICab* SelectCab(string ctype) = 0;
    virtual CabTypes GetCabTypes() = 0;
};

class CabDatabase
{
private:
    vector<ICab*> allCabs;
public:
    CabDatabase() : allCabs({}) {}
    vector<ICab*> getCabs(string ctype);
    void InsertCab(ICab* cabObj)
    {
        allCabs.push_back(cabObj);
    }

    void DeleteCab(ICab* cabObj)
    {
        allCabs.erase(std::find(allCabs.begin(), allCabs.end(), cabObj));
    }
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

    ICab* SelectCab(string ctype);
};
