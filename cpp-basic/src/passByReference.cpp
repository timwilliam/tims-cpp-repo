#include <iostream>

using namespace std;

// Using pass by reference
void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;

    return;
}

int main(){
    // Pass by value is the default for everything, except arrays which decays to pointers
    // - even if you are using object of custom type
    
    int a = 10, b = 20;
    swap(a, b);
    
    cout << a << endl;
    cout << b << endl;

    return 0;
}