#include <iostream>

using namespace std;

// other way of creating a constant is with a macro, macro constant
#define ID_MACRO 10

int main(){
    // symbolic constant, a read-only variable, can't be changed
    // here int is const-qualified with const, qualified here means prefixing a data type more descriptive term, like std::cout
    const int ID = 5; // need to be declared during creation

    // other type of constant is enum, literal constant
    enum{y = 100};
    cout << y << endl;

    return 0;
}