#include <iostream>
#include "notifikaattori.h"

Notifikaattori::Notifikaattori()
{
    cout << "Luodaan notifikaattori" << endl;
}

void Notifikaattori::lisaa(Seuraaja * add)
{
    cout << "Notifikaattori lisaa seuraajan " << add -> getNimi() << endl;
    add -> next = seuraajat;
    seuraajat = add;

}

void Notifikaattori::poista(Seuraaja * remove)
{
    cout << "Notifikaattori poistaa seuraajan " << remove -> getNimi() << endl;
    Seuraaja * curr = seuraajat;

    while(curr -> next != nullptr){

        if(curr -> next == remove){
            curr -> next = curr -> next -> next;
            return;
        }
        curr = curr -> next;
    }
}

void Notifikaattori::tulosta()
{
    Seuraaja * o = seuraajat;
    cout << "Notifikaattorin seuraajat:" << endl;

    while(o != nullptr){
        cout << "Seuraaja " << o -> getNimi() << endl;
        o = o -> next;
    }
}

void Notifikaattori::postita(string text)
{
    Seuraaja * o = seuraajat;
    cout << "Notifikaattori postaa viestin " << text << endl;

    while(o != nullptr){
        o -> paivitys(text);
        o = o -> next;
    }
}
