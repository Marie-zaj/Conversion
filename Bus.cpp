#include "Bus.h"
#include "Base.h"

Bus::Bus(int people, int max_people, double petrol, double max_petrol)
    : Vehicle(petrol, max_petrol)
{
    this->people = people;
    this->max_people = max_people;
}

int Bus::getPeopleCount()
{
    return people;
}

int Bus::getMaxPeople()
{
    return max_people;
}

void Bus::arrive()
{
    Base::vehicles_on_base++;
    Base::people_on_base += (people + 1);
    people = 0;
}

bool Bus::leave()
{
    if (!Vehicle::leave())
        return false;

    int can_take = max_people;
    int taken = (Base::people_on_base < can_take)
        ? Base::people_on_base
        : can_take;

    Base::people_on_base -= taken;
    people = taken;

    return true;
}