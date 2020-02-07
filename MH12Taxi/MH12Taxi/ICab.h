#pragma once
#include <string>
class ICab
{
protected:
    std::string regNumber;
    std::string cabtype;

public:
    virtual double getBaseRate() = 0;
    virtual double getPerKMRate() = 0;
    virtual double getPerHrate() = 0;
    std::string getRegistrationNo() { return regNumber; }
    std::string getCabType() { return cabtype; }
};
