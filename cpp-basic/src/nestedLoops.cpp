#include <iostream>

using namespace std;

int main(){
    // we need to specify the size of the array
    int numberGrid[3][2] = {
        {1, 2},
        {5, 6},
        {7, 8}
    };

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 2; j++) {
            cout << numberGrid[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}