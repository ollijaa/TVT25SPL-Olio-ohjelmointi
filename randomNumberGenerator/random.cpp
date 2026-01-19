#include "random.h"

random::random()
{
    a = 1664525;
    c = 1013904223;
    Xn = 0; // Seed
    mod = 4294967296;
}

void random::setSeed(long long s)
{
    Xn = s;
}

long long random::getSeed()
{
    return Xn;
}

long long random::rand()
{
    long long tulos = ((a*Xn)+c)%mod;
    Xn = tulos;
    return Xn;
}
