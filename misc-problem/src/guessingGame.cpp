#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

void printMenu(){
    cout << "0. Quit\n";
    cout << "1. Play Game\n";
    cout << "Enter choice: ";
    return;
}

void printVector(vector <int> data){
    for(int i = 0; i < data.size(); i++){
        cout << data[i] << " ";
    }

    cout << endl;
    return;
}

void saveScore(int guessCount){
    ifstream input("bestScore.txt");
    if(!input.is_open()){
        cout << "Unable to read file!\n";
        return;
    }

    int bestScore;
    input >> bestScore;
    input.close();

    ofstream output("bestScore.txt");
    if(guessCount < bestScore){
        output << guessCount;
    }
    output.close();
}

void playGame(){
    cout << "Welcome to guessing game!\n";
    
    int nTries = 5, guess, count = 0;
    int random = rand() % 101; // modulus by 100 to get a number between 0 - 100  
    vector <int> guesses;

    // for debugging purposes
    cout << "Magic number: " << random << endl;

    while(nTries > 0){
        cout << "Enter your guess: ";
        cin >> guess;
        guesses.push_back(guess);

        count++;

        if(guess > random){
            cout << "Your guess is too high, try again!\n";
        }else if(guess < random){
            cout << "Your guess is too low, try again!\n";
        }else{
            cout << "Your guess is correct, you win!\n\n";
            cout << "Here is a list of your guesses: ";
            printVector(guesses);
            cout << endl;

            saveScore(count);

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
            // best coding practice is to have function call instead of having the logic written here to play the game
            case 1:
                playGame();
                break;
            default:
                cout << "Bye bye!" << endl;
                return 0;
        }
    } while (true);
    
    return 0;
}