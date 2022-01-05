#include <iostream>

using namespace std;

// a function can also returns a value
// note that we need to declare the data type of the value to return, void if returns nothing
double cube(double num){
    return num * num * num;
}

int main(void){
    double answer;

    answer = cube(5.0);
    cout << answer << endl;

    // return means that we are done executing the code up till before the return statement
    return 0;
}