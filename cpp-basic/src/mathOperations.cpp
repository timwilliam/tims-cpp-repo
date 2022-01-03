#include <iostream>
#include <cmath> // using math functions

using namespace std;

int main(void){
    // basic math operation: addition, substraction, multiplication, division
    cout << 1 + 2 << endl;
    cout << 5 - 2 << endl;
    cout << 2 * 4 << endl;
    cout << 10 / 2 << endl;

    // modulus operation, to get the remainder of a division
    cout << 10 % 3 << endl;

    // shorthand for math operation: +=, -=, *=, /=, %=
    int a = 6;
    a += 4;
    cout << a << endl;

    // another shorthand for increment by 1 and decrement by 1 operation: ++, --
    a++;
    cout << a << endl;

    // math operation with 2 integer numbers will return an integer number
    cout << 10 / 3 << endl; // note that the answer is wrong as the result is truncated into integer

    // math operation with an integer and a decimal number will return a decimal number
    cout << 10 / 3.0 << endl;

    // using some basic math functions
    cout << pow(2, 5) << endl;
    cout << sqrt(100.0) << endl;
    cout << fmax(3, 100) << endl;
    // other functions: round, ceil, floor

    return 0;
}