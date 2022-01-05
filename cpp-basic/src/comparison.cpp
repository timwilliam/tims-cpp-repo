#include <iostream>

using namespace std;

int getMax(int num1, int num2){
    if(num1 > num2)
        return num1;
    else
        return num2;
}

int main(){
    cout << getMax(2, 5) << endl;

    return 0;
}