#include <iostream>

using namespace std;

int main(){
    int index = 1;

    // execute the code as long as the condition is true
    // the condition is checked first before executing the code
    while(index <= 5){
        cout << index << endl;
        index++; // watch out for infinite loop! that's why we need to increment the index!
    }

    // there is also do while loop, code is executed once first, then condition is checked

    return 0;
}