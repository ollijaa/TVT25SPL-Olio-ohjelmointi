#include "chef.h"
#include "italianchef.h"
using namespace std;

int main()
{

    Chef Chef("Gordon");
    Chef.makeSalad(11);
    Chef.makeSoup(14);

    ItalianChef ItalianChef("Mario");
    ItalianChef.makeSalad(9);
    ItalianChef.askSecret("pizza", 12, 12);

    return 0;
}
