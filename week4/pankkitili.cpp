#include <iostream>
#include "pankkitili.h"

Pankkitili::Pankkitili(string s)
{
    omistaja = s;
    cout << "Checking account opened for " << omistaja << endl;
}

double Pankkitili::getBalance()
{
    return saldo;
}

bool Pankkitili::deposit(double deposit)
{
    if(deposit > 0){    // Talletukset voi olla pelkästään positiivisia
        saldo = (saldo + deposit);
        cout << "Deposited " << deposit << " to his bank account" << endl;
        return true;
    }

    else{
        cout << "Can't deposit negative sums" << endl;
        return false;
    }
}

bool Pankkitili::withdraw(double withdraw)
{
    if(withdraw < 0){   // Estää negatiivisen summan noston
        cout << "Can't withdraw negative sums" << endl;
        return false;
    }
    if(withdraw <= saldo){   // Sallii vain nostot jotka eivät ylitä saldoa
        saldo = (saldo - withdraw);
        cout << "Withdrew " << withdraw << " from his bank account" << endl;
        return true;
    }

    else{
        cout << "Insufficient funds" << endl;
        return false;
    }
}
