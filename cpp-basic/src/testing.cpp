#include <iostream>

using namespace std;

double getSquare(double x){
    return x * x;
}

int main(){
    // It is a good practice to write a function that is easy to test
    // - in other words, functon that is small and does one thing
    
    // We can have a collection of the following to test the code
    // - so before refactor, it is a good idea to have your test collection ready
    if(getSquare(5) == 25){
        cout << "Test passed!" << endl;
    }

    return 0;
}