#include "notifikaattori.h"

int main()
{
    Notifikaattori n;

    Seuraaja a("A");
    Seuraaja b("B");
    Seuraaja c("C");
    Seuraaja d("D");

    n.lisaa(&a);
    n.lisaa(&b);
    n.lisaa(&c);
    n.tulosta();

    n.postita("Tama on viesti 1");

    n.poista(&c);
    n.lisaa(&d);

    n.postita("Tama on viesti 2");

    n.tulosta();

    return 0;
}
