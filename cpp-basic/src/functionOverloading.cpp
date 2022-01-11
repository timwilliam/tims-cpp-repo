#include <iostream>
#include <string>

using namespace std;

// Function overloading allows us to have two or more of the same function as long as they have different input parameter
// - in C++, the return data type does not make a function unique, the return type is not part of that function signature
// - note that overloading is not designed for optional parameter! use default argument value for this
struct Rectangle{
    double width, length;
};

double area(double length, double width){
    return length * width;
}

double area(double length){
    return length * length;
}

double area(Rectangle rectangle){
    return rectangle.length * rectangle.width;
}

int main(){
    Rectangle rectangle;
    rectangle.width = 10;
    rectangle.length = 20;

    cout << area(5) << endl;
    cout << area(rectangle.length, rectangle.width) << endl;
    cout << area(rectangle) << endl;

    return 0;
}