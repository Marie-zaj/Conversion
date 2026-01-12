#pragma once
using namespace std;

class Vehicle
{
protected:
    double petrol_amount;
    double tank_volume;

public:
    Vehicle(double petrol, double tank);

    double getTankVolume();
    double getPetrolAmount();

    virtual void arrive();
    virtual bool leave();

    virtual ~Vehicle() {}
};