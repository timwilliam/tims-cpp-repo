#include <iostream>

using namespace std;

int main(){
    int secretNum = 7;
    int guess, guessCount = 1, guessLimit = 3;

    while(guess != secretNum && guessCount <= guessLimit){
        cout << "Enter guess: ";
        cin >> guess;

        if(guess > secretNum)
            cout << "Your guess is higher than the secret number!\n";
        else if(guess < secretNum)
            cout << "Your guess is lower than the secret number!\n";

        guessCount++;
    }

    if(guess == secretNum)
        cout << "You got the number right!\n";
    else
        cout << "You lose!\n";

    return 0;
}