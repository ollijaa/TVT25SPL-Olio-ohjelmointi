#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int game(int);

int main()
{
    srand(time(0)); // Otetaan siemenluku ajasta

    int result = game(40);  // Kutsutaan peli ja otetaan arvausten määrä talteen result nimiseen muuttujaan
    cout << "Arvasit " << result << " kertaa" << endl;  // Arvausten määrä
    return 0;
}

int game(int maxnum)
{
    int randomNumber = (rand() % maxnum) + 1;   // Satunnaisen luvun arvonta
    int guess;
    int amountOfGuesses = 0;;

    //cout << "Random value: " << randomNumber << endl;
    cout << "Arvaa luku" << endl;

    while(1){

        cin >> guess;
        amountOfGuesses++;

        if(guess == randomNumber){
            cout << "Arvasit oikein" << endl;
            return amountOfGuesses;
        }

        else if(guess < randomNumber){
            cout << "Arvauksesi oli liian pieni" << endl;
        }

        else if(guess > randomNumber){
            cout << "Arvauksesi oli liian suuri" << endl;
        }
    }
}
