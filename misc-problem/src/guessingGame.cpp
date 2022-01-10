#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void printMenu(){
    cout << "0. Quit\n";
    cout << "1. Play Game\n";
    cout << "Enter choice: ";

    return;
}

void printArray(vector <int> array){
    for(int i = 0; i < array.size(); i++){
        cout << array[i] << " ";
    }

    cout << endl;
    return;
}

void playGame(){
    cout << "Welcome to guessing game!\n";
    
    int nTries = 5, guess;
    int random = rand() % 101; // modulus by 100 to get a number between 0 - 100  
    vector <int> guesses;

    while(nTries > 0){
        cout << "Enter your guess: ";
        cin >> guess;
        guesses.push_back(guess);

        if(guess > random){
            cout << "Your guess is too high, try again!\n";
        }else if(guess < random){
            cout << "Your guess is too low, try again!\n";
        }else{
            cout << "Your guess is correct, you win!\n\n";
            cout << "Here is a list of your guesses: ";
            printArray(guesses);
            cout << endl;

            return;
        }

        nTries--;
    }

    cout << "You lost!\n\n";
    return;
}

int main(){
    // seed the random number generator so that we get different number everytime, only need to do once
    srand(time(NULL));

    int choice;

    do
    {
        printMenu();
        cin >> choice;

        switch (choice)
        {
            case 1:
                playGame();
                break;
            default:
                exit(0);
        }
    } while (true);
    
    return 0;
}