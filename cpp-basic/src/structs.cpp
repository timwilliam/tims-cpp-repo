#include <iostream>

// What is OOP?
// - based on the concepts of classes and objects, in which class is used to define an object

// In C++ a class and a struct will do the same thing, it will create an object
// - structs are similar to classes, structs usually used for smaller things, while classes are used for much larger things
// - for example, you can use struct to create the blueprint for person, and then it can be converted to a class

// Syntatically the difference between a class and a struct lies in its access modifiers
// - when creating a class/struct, the thing inside of it is known as a members
// - members have 3 access modifiers: public, private, and protected
// - public members can be accessed on that object, while private members will not be visible, can only be accessed within the class definition
// - the members of struct is by default public, with classes they are by default private
// - people usually only store data inside a struct, although you can also put method inside but people don't do that

struct User{
    std::string firstName, lastName;
    
    std::string getStatus(){
        return status;
    }

    private:
        std::string status = "Gold";
};

int main(){
    // create an instance of a struct, in other words, object
    User user;
    user.firstName = "tim";
    user.lastName = "william";
    
    std::cout << user.getStatus() << std::endl;

    return 0;
}