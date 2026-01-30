#include <iostream>
#include "asiakas.h"

int main()
{

    Asiakas k("Kari", 1000);
    cout << endl;

    Asiakas j("Jari", 2000);
    cout << endl;

    k.talletus(2000);
    k.showSaldo();

    cout << endl;
    cout << endl;

    k.tiliSiirto(500, j);
    cout << endl;

    k.showSaldo();
    j.showSaldo();


    cout << endl;
    cout << endl;

    return 0;
}
