#include <iostream>

using namespace std;

// Another way to make parameter optional is to use default values
// - anytime you can put a default value, do it, instead of doing function overloading since it is more complex
// - default arguments first, then if not possible, go with function overloading
double getPow(double base, int pow = 2){
    int total = 1;
    for(int i = 0; i < pow; i++){
        total *= base;
    }
    return total;
}

// By using default value, we don't have to explicitly write the following function anymore
// double getPow(double base){
//     return base * base;
// }

int main(){
    cout << getPow(3, 3) << endl;
    cout << getPow(3) << endl;
    return 0;
}