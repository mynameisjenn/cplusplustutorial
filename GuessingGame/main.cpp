#include <iostream>

using namespace std;

int main()
{
    int secretNum = 7;
    int guess;
    int guessCount = 0;
    int guessLimit = 5;
    bool outOfGuesses = false;

    while(secretNum != guess && !outOfGuesses) {

        if(guessCount < guessLimit) {
            cout << "Enter your guess: ";
            cin >> guess;
            guessCount++;
        } else {
            outOfGuesses = true;
        }

    }

    if(outOfGuesses) {
        cout << "You are out of guesses. You lost!";
    } else {
        cout << "You guessed the right number! You win!";
    }

    return 0;
}
