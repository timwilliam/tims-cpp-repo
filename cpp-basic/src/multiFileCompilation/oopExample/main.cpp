#include <iostream>
#include <string>
#include "user.h"
#include "teacher.h"

// 1 Create implementation file (user.cpp), where all functio definitions and body is defined
//   - prefixed with a class name sot i can be associated with the one declared in the header file
// 2 Create header file (user.h), where all class and members is declared but not yet define

int main(){
    Teacher teacher; // teacher is in fact also a user
    teacher.output();

    User& u = teacher; // reference to user, teacher inherits from user
    u.output();

    return 0;
}
