#include <iostream>
#include "italianchef.h"

ItalianChef::ItalianChef(string italianChef) : Chef(italianChef)
{
    chefName = italianChef;
    cout << "ItalianChef " << chefName << " Constructor" << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "ItalianChef " << chefName << " Deconstructor" << endl;
}

bool ItalianChef::askSecret(string s, int ingredient1, int ingredient2)
{
    if(password.compare(s) == 0){
        cout << "Password OK!" << endl;
        makepizza(ingredient1, ingredient2);
        return true;
    }

    else return false;
}

int ItalianChef::makepizza(int ingredient1, int ingredient2)
{
    water = ingredient1;
    flour = ingredient2;

    cout << "ItalianChef " << chefName << " with " << water << " water and " << flour << " flour can make " << min((water / 5), (flour / 5)) << " pizzas" << endl;
    return min((water / 5), (flour / 5));
}
