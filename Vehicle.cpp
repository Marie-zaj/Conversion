#include "Vehicle.h"
#include "Base.h"

Vehicle::Vehicle(double petrol, double tank)
{
    petrol_amount = petrol;
    tank_volume = tank;
}

double Vehicle::getTankVolume()
{
    return tank_volume;
}

double Vehicle::getPetrolAmount()
{
    return petrol_amount;
}

void Vehicle::arrive()
{
    Base::vehicles_on_base++;
    Base::people_on_base++;
}

bool Vehicle::leave()
{
    if (Base::people_on_base < 1)
        return false;

    double need = tank_volume - petrol_amount;
    if (Base::petrol_on_base < need)
        return false;

    Base::petrol_on_base -= need;
    petrol_amount = tank_volume;

    Base::vehicles_on_base--;
    Base::people_on_base--;

    return true;
}