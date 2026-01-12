#include <iostream>
using namespace std;

#include "Base.h"
#include "Bus.h"
#include "Truck.h"

int main()
{
    Base::printInfo();

    Bus bus(10, 30, 20, 60);
    Truck truck(5, 20, 50, 120);

    bus.arrive();
    truck.arrive();

    Base::printInfo();

    bus.leave();
    truck.leave();

    Base::printInfo();

    return 0;
}