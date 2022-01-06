#include <iostream>

using namespace std;

void printArray(int array[], int size){
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }

    cout << endl;
    return;
}

int main(){
    const int SIZE = 10;
    int array[SIZE], counter = 0;

    for (int i = 0; i < SIZE; i++) {
        if (cin >> array[i]) { // returns true if input is stored properly
            counter++;
        } else {
            break;
        }
    }

    printArray(array, counter);
    cin.clear(); // clear the error state from the previous for loop

    return 0;
}