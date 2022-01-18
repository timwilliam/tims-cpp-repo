#include <iostream>
#include <string>
#include "user.h"

// 1 Create implementation file (user.cpp), where all functio definitions and body is defined
//   - prefixed with a class name sot i can be associated with the one declared in the header file
// 2 Create header file (user.h), where all class and members is declared but not yet define

int main(){
    User user("tim", "william", "Gold");
    std::cout << user << std::endl;
    return 0;
}
