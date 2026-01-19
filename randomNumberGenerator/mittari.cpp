#include "mittari.h"
#include <iostream>
using namespace std;

void mittari::mittaus()
{
    float temp = dhtolio.readTemperature();
    string s = lcdolio.floatToString(temp);
    lcdolio.print(s);
}

void mittari::setup()
{
    cout << "Mittari setup funktio" << endl;
    dhtolio.begin();
    lcdolio.begin();
}
