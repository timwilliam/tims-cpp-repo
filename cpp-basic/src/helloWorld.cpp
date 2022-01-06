// code preprocessor
#include <iostream>

// std namespace, take everything available in the std namespace std and make it available
// - so that in the future we don't have to reference it with the std prefix
// - this is called using directive
// - can be troublemsome when importing a bunch of project and library as naming conflicts can occur
using namespace std;

// alternative is to use using declaration
// using std::cout; // which means we specifically import cout only
// then with this we also dont have to use the std prefix everytime we want to call cout object

// the placement also matters, since we put it outside of main, then all function can use it

int main(void){
    // any line of code written in a main() function will be executed 

    // std here is a namespace, we can view it as a grouping of code
    // - splitting a big code, into smaller groups
   
    // imagine 2 people writing a function that happens to have the same name, e.g.: cout
    // - namespace can be a solution to differentiate between them, preventing naming conflicts

    // by prefixing with appropiate namespace, we can be very specific about what item you are trying to reference
    std::cout << "Hello Word\n";

    cout << "Hello World\n";

    // cout is basically an object, derived from a class
    // << is an operator

    return 0;
}