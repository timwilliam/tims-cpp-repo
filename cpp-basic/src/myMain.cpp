#include <iostream>
#include "myMathLib.h" // our custom library

using namespace std;

// The general idea is to break up your program into 3 files: header file (*.h), implementation file (*.cpp), main file (*.cpp)
// - in the code, including our own custom header file looks like this: #include "myLib.h" (notice the double quotes)
// - we will usually have multiple header and implementation file, and only one main file
// - the main file is optional, you can only have a header and implementation file and use it by calling it
// - we can see the header file as the declarations (like an interface), implementation file as the definitions, and main file as the calling file
// - header file does not contain executable, it contains preprocessor directive (starts with #ifndef > #define > #endif)
// - note that definition of strcture is usually placed in the header file

// When compiling, you can choose to output object file by using the -c flag in gcc
// - when you want to distribute your code but the source code hidden, use the -c flag and the *.o files
// - if you are doing open source, then distribute the cpp files

int main(void){
    cout << getPow(5) << endl;
    cout << getPow(5, 2) << endl;
    
    return 0;
}