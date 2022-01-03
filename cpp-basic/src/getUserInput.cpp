#include <iostream>

using namespace std;

int main(void){
    // int number;
    // cout << "Enter an integer number ";
    // cin >> number;

    // cout << "You inputted " << number << endl;

    // to get a string of text
    
    string name;
    cout << "Enter your name ";
    getline(cin, name);

    cout << "Hello " << name << endl;

    return 0;
}