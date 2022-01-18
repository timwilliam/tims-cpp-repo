#include <iostream>
#include "myMathLib.h" // our custom library

// using namespace std;

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

// This file needs the other 2 file to be compiled properly, myMathLib.cpp, and myMathLib.h
// - to compile, run the following in the terminal: g++ myMain.cpp myMathLib.cpp
// - then you can run the program with ./a.out

// The purpose of a Makefile is to automate the build process, its a way to describe the compilation process
// - makefile can automatically compile only the code that has changed, very useful in application with many codes
// - when compiling a code file (*.cpp), you can get the executable directly, or you can generate an object (*.o) code first
// - with the generated object file, we can link them together along with the header file (*.h) and get our executable (a.out)
// - this also save time for you as you don't have to type all of the command to compile the code manually, instead we just run the command make

int main(void){
    std::cout << mathUtil::getPow(5) << std::endl;
    std::cout << mathUtil::getPow(5, 2) << std::endl;
    
    return 0;
}