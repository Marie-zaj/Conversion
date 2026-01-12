#include "Truck.h"
#include "Base.h"

Truck::Truck(double load, double max_load, double petrol, double max_petrol)
    : Vehicle(petrol, max_petrol)
{
    this->load = load;
    this->max_load = max_load;
}

double Truck::getCurrentLoad()
{
    return load;
}

double Truck::getMaxLoad()
{
    return max_load;
}

void Truck::arrive()
{
    Base::vehicles_on_base++;
    Base::people_on_base++; // водитель
    Base::goods_on_base += load;
    load = 0;
}

bool Truck::leave()
{
    if (!Vehicle::leave())
        return false;

    double taken = (Base::goods_on_base < max_load)
        ? Base::goods_on_base
        : max_load;

    Base::goods_on_base -= taken;
    load = taken;

    return true;
}