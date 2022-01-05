#include <iostream>

using namespace std;

int operate(int num1, char op, int num2){
    if(op == '+'){
        return num1 + num2;
    } else if(op == '-') {
        return num1 - num2;
    } else if(op == '*') {
        return num1 * num2;
    } else if(op == '/') {
        return num1 / num2;
    } else {
        return 0;
    }
}

int main(){
    int num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator: ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    cout << operate(num1, op, num2) << endl;

    return 0;
}