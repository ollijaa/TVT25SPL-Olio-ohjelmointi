#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

Game::Game(int max) // Konstruktori
{
    maxNumber = max;
    cout << "GAME CONSTRUCTOR: obejct initialized with " << maxNumber << " as a maimum value" << endl;
}

Game::~Game()   // Dekonstruktori
{
    cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
}

void Game::play()
{
    srand(time(0));
    randomNumber = (rand() % maxNumber + 1);
    numOfGuesses = 0;
    cout << randomNumber << endl;

    while(1){
        cout << "Give your guess between 1-" << maxNumber << endl;
        cin >> playerGuess;
        numOfGuesses++;

        if(playerGuess == randomNumber){
            cout << "Your guess is correct" << endl;
            printGameResult();
            return;
        }

        else if(playerGuess < randomNumber){
            cout << "Your guess is too small" << endl;
        }

        else if(playerGuess > randomNumber){
            cout << "Your guess is too big" << endl;
        }
    }
}

void Game::printGameResult()
{
    cout << "You guessed the right answer " << randomNumber << " with " << numOfGuesses << " guesses" << endl;
}
