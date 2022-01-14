#include <iostream>

// When creating a function, we have to determine what type you are going to accept as an argument
// - so we create this parameters in the function declaration
// - if we are going to accept different types, then we have an issue as the function can only accept certain types
// - with function overloading we can create the same function that acepts different signatures
// - with function overloading, the general concepts of a function is often very similar eventhough they accept different parameters

// With function template, we no longer are bound to create function overload for every possible input parameter combination
// - with templatizing, we can now do:
//      template <typename T> // or template <class T>
//      void swap (T &x, T &y);
// - where T is a placeholder for any data type, this can work for integer, double, and what not
// - T can be substituted for any type and is a template

template <typename T>
void swap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
    return;
}

// overloaded templatize function
template <typename T>
void swap(T a[], T b[], int size){
    for(int i = 0; i < size; i++){
        T temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
    return;
}

int main(){
    int a = 10;
    int b = 30;
    // whenever passing variable thats not an array, we need to use the & sign (call by reference)
    swap(a, b);
    std::cout << a << " " << b << std::endl;

    std::string firstName = "tim";
    std::string lastName = "william";
    swap(firstName, lastName);
    std::cout << firstName << " " << lastName << std::endl;

    int const SIZE = 4;
    int nines[] = {9, 9, 9, 9};
    int ones[] = {1, 1, 1, 1};
    swap(nines, ones, SIZE);
    for(int i = 0; i < SIZE; i++){
        std::cout << nines[i] << "\t";
    }
    std::cout << std::endl;
    for(int i = 0; i < SIZE; i++){
        std::cout << ones[i] << "\t";
    }
    std::cout << std::endl;

    return 0;
}