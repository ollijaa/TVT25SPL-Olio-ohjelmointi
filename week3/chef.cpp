#include <iostream>
#include "chef.h"

Chef::Chef(string s)
{
    chefName = s;
    cout << "Chef " << chefName << " Constructor" << endl;
}

Chef::~Chef()
{
    cout << "Chef " << chefName << " Deconstructor" << endl;
}

string Chef::getName()
{
    return chefName;
}

int Chef::makeSalad(int ingredient)
{
    cout << "Chef " << chefName << " with " << ingredient << " items can make " << (ingredient / 5) << " salad portions" << endl;
    return (ingredient / 5);
}

int Chef::makeSoup(int ingredient)
{
    cout << "Chef " << chefName << " with " << ingredient << " items can make "  << (ingredient / 3) << " soup portions" << endl << endl;
    return (ingredient / 3);
}
