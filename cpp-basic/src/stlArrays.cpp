#include <iostream>
#include <array>
#include <vector>

using namespace std;

void printArray(array <int, 5> data){
    for(int i = 0; i < data.size(); i++){
        cout << data[i] << endl;
    }

    return;
}

int main(){
    // templatize array it works very similar to normal array and vector
    // - it is somewhere in the middle
    // - templatize array is statically size
    // - when passed to a function, it remembers the length, just like vector 
    // - templatize array is pass by value
    // - we can view templatize array as an array wrapped inside an object, thats why size works as it comes from object wrapping

    array <int, 5> id = {1, 2, 3, 4, 5};
    cout << id.size() << endl;

    printArray(id);

    // array vs vector vs stlArray
    // main difference if we can assign one variable to another variable of the same type (templatize array, and vector allows for this)
    // c style array is pass by pointer (decays to a pointer), thats why the size information is lost

    // we cant do this in C, need to go through all of the elements and assign it one by one
    vector <int> stuff;
    vector <int> things = stuff;

    // array                stlArray            stlVector           |notes
    // static               static              dynamic             |sizing
    // decay to pointer     pass by value       pass by value       |passing to function
    // must pass size       .size()             .size()             |
    // x                    assign to other var assign to other var |

    return 0;
}