#include <iostream>

using namespace std;

int main(){
    // pointers is a data type that stores memory address
    // any variable is stored inside of the computer memory
    int id = 99;
    double gpa = 3.0;
    string name = "tim";

    // print out memory address where id is stored
    // we usually call this memory addrress with the term pointers
    cout << &id << endl;
    cout << &gpa << endl;
    cout << &name << endl;

    // a variable to store a pointer, marked with asterisk sign '*'
    // a pointer can only stored memory address of a variable with the same data type
    int *pId = &id;
    cout << pId << endl;

    // pointer dereferencing, get the value stored in the memory address
    cout << *pId << endl;
    cout << *&id << endl;

    return 0;
}