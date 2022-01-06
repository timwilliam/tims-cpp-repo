#include <iostream>
#include <string>

using namespace std;

int main(){
    // creating literals for different bases
    int number = 30;
    cout << number << endl;

    int number2 = 0x30; // hexadecimal
    cout << number2 << endl;

    int number3 = 0x30; // octal
    cout << number3 << endl;

    // decimal to hex
    int number4 = 30;
    cout << hex << number4 << endl;

    // decimal to octal
    int number5 = 30;
    cout << oct << number5 << endl;


    return 0;
}