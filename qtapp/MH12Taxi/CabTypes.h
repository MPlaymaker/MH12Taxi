#pragma once
#include "ICab.h"

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



