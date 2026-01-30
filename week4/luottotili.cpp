#include <iostream>
#include "luottotili.h"

Luottotili::Luottotili(string s, double limit) : Pankkitili(s)
{
    luottoRaja = limit;
    cout << "Credit accout opened for " << omistaja << ", Line of credit " << limit << endl;
}

bool Luottotili::deposit(double cDeposit)
{
    if((luottoRaja - cDeposit) <= 0){   // Voi tallettaa vain luottorajan verran
        cout << "Can't deposit more than credit limit" << endl;
        return false;
    }
    if(cDeposit > 0){    // Talletukset voi olla pelkästään positiivisia
        saldo = (saldo + cDeposit);
        cout << "Deposited " << cDeposit << " to his credit account" << endl;
        return true;
    }

    else{
        cout << "Can't deposit negative credit" << endl;
        return false;
    }
}

bool Luottotili::withdraw(double cWithdraw)
{
    if(cWithdraw < 0){  // Estää negatiivisen summan noston
        cout << "Can't withdraw negative sums" << endl;
        return false;
    }

    if(luottoRaja - cWithdraw > -luottoRaja){   // Sallii vain nosto jotka ei ylitä luottorajaa
        saldo = (saldo - cWithdraw);
        cout << "Withdrew " << cWithdraw << " from his credit account" << endl;
        return true;
    }

    else{
        cout << "Insufficient credit" << endl;
        return false;
    }
}
