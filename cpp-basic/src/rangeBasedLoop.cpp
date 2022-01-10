#include <iostream>

using namespace std;

int main(){
    // to help with iterating through collections (array, templatize array, vector)
    // only works for collection though, not for general loop

    int records[] = {1, 2, 3, 4, 5};

    for(int record : records){
        cout << record << endl;
    }

    return 0;
}