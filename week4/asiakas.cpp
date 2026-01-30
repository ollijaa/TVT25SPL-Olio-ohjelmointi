#include <iostream>
#include "asiakas.h"
#include "pankkitili.h"
#include "luottotili.h"

Asiakas::Asiakas(string s, double num) : kayttotili(s), luottotili(s, num)
{
    nimi = s;
    cout << "Account opened for " << nimi << endl;
}

string Asiakas::getNimi()
{
    return nimi;
}

void Asiakas::showSaldo()
{
    cout << getNimi() << "'s Checking account balance " << kayttotili.getBalance() << endl;
    cout << getNimi() << "'s Credit account balance " << luottotili.getBalance() << endl;
}

bool Asiakas::talletus(double deposit)
{
    cout << getNimi() << " ";
    kayttotili.deposit(deposit);
    return true;
}

bool Asiakas::nosto(double withdraw)
{
    cout << getNimi() << " ";
    kayttotili.withdraw(withdraw);
    return true;
}

bool Asiakas::luotonMaksu(double cDeposit)
{
    cout << getNimi() << " ";
    luottotili.deposit(cDeposit);
    return true;
}

bool Asiakas::luotonNosto(double cWithdraw)
{
    cout << getNimi() << " ";
    luottotili.withdraw(cWithdraw);
    return true;
}

bool Asiakas::tiliSiirto(double amount, Asiakas & b)
{
    if(amount < 0 || amount > kayttotili.getBalance()){ // Ei voi siirtää negatiivisia summia tai enemmän mitä tilillä on
        cout << "Bank Transfer error" << endl;
        return false;
    }

    else{
        cout << getNimi() << " transferred " << amount << " to " << b.getNimi() << endl;
        nosto(amount);
        b.talletus(amount);
        return true;
    }
}
