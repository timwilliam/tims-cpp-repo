#include <iostream>

// Creating an object from a class is called instantiation
// - creating a class is like creating a new type

// In a class we have:
// - constructor, to create a new object
// - method, a function attached to an object
// - operator overloading
// - static members, which describes the class in general

class User{
    std::string status = "Gold";

    public:
        std::string firstName, lastName;
    
    // since status is private, it need a method to access it
    std::string getStatus(){
        return status;
    }
};

int main(){
    User user;
    std::cout << user.getStatus() << std::endl;
    return 0;
}