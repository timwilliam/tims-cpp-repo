#include <iostream>

// Creating an object from a class is called instantiation
// - creating a class is like creating a new type

// In a class we have:
// - constructor, to create a new object
// - method, a function attached to an object
// - operator overloading
// - static members, which describes the class in general

// The idea of encapsulation is to hide the innerworking of a class to the public world
// - user need only to worry about how to use the function, and not necessarily how the innerworking of the function works
// - we can view it like an interface, the inner details is abstracted, to ensure user is using it in a proper way
// - encapsulation is achieved with access modifiers, and through getters and setters
// - getters and setters allows us to have access to private data members of a class

class User{
    public:
        std::string firstName, lastName, status;
    
        void setStatus(std::string status){
            if(status == "Gold" || status == "Silver" || status == "Bronze"){
                this->status = status;
            }
            
        }
    
        std::string getStatus(){
            return status;
        }
};

int main(){
    User user;
    user.setStatus("Test");
    std::cout << user.getStatus() << std::endl;
    return 0;
};