#include <iostream>

using namespace std;

int main(){
    // an array needs to know the size of the array it going to containt (the size of the second array)
    int grades[][2] = { // ID, grades
        {1, 100},
        {2, 60},
        {3, 85}
    };

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 2; j++){
            cout << grades[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}