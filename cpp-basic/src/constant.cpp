#include <iostream>
#include <array>

using namespace std;

// We can use const to create a variable that will not change
// - in the printArray() function scope, the data will remain fixed
// - by default array is modifiable by function, while vector is not (unless you pass it by reference)
void printArray(const int data[], int size){
    for(int i = 0; i < size; i++){
        cout << data[i] << " ";
    }
    cout << endl;
    return;
}

int main(){
    int data[] = {1, 2, 3};
    printArray(data, 3);
    return 0;
}