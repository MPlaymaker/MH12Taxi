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
    string getRegistrationNo() { return regNumber;}
    string getCabType(){return cabtype;}
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
};

class MiniCab : ICab
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
};

class SedanCab : ICab
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
    }

    void InsertCab(ICab* cabObj)
    {
        allCabs.push_back(cabObj);
    }

    void DeleteCab(ICab* cabObj)
    {
        allCabs.erase(std::find(allCabs.begin(), allCabs.end(), cabObj));
    }
};


class CabSelectionService : public ICabSelectionService
{
private:
    CabDatabase* cabDB;

public:

    CabTypes GetCabTypes()
    {
        return {"Mini", "Prime", "Sedan"};
    }

    ICab* SelectCab(string ctype)
    {
        vector<ICab*>availableCabs = cabDB->getCabs(ctype);

        //TODO: Processing on the basis of selection
        if(availableCabs.empty())
            return nullptr;
        else
            return availableCabs[0];
    }
};

int main()
{

}
