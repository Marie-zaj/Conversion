#include "Base.h"
#include <iostream>

int Base::people_on_base = 100;
int Base::vehicles_on_base = 10;
double Base::petrol_on_base = 5000.0;
double Base::goods_on_base = 200.0;

void Base::printInfo()
{
    cout << "=== BASE STATUS ===" << endl;
    cout << "People: " << people_on_base << endl;
    cout << "Vehicles: " << vehicles_on_base << endl;
    cout << "Petrol: " << petrol_on_base << " L" << endl;
    cout << "Goods: " << goods_on_base << " tons" << endl;
    cout << "===================" << endl << endl;
}