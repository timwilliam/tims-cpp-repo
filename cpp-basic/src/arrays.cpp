#include <iostream>

using namespace std;

void printArray(int array[], int size){
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }

    cout << endl;
    return;
}

int main(void){
    // create an array with square brackets
    int luckyNums[] = {4, 13, 21, 33};

    // if you know the number of elements to put an array you can do
    // int luckyNums[4] = {4, 13, 21, 33};

    // accessing individual element in an array
    cout << luckyNums[1] << endl;

    // modifying an element in an array
    luckyNums[1] = 99;
    cout << luckyNums[1] << endl;

    // adding more elements to an array
    luckyNums[10] = 100;
    cout << luckyNums[10] << endl;

    cout << sizeof(luckyNums) / sizeof(luckyNums[0]) << endl;
    printArray(luckyNums, sizeof(luckyNums) / sizeof(luckyNums[0]));

    return 0;
}