#include <iostream>

class User{
    std::string status = "Gold";
    
    public:
        std::string firstName, lastName;
        std::string getStatus(){
            return status;
        }

        User(std::string firstName, std::string lastName){
            this->firstName = firstName;
            this->lastName = lastName;
        }

        ~User(){
            std::cout << "Destructor" << std::endl;
        }
};

int main(){
    User user("tim", "william");
    std::cout << user.firstName << std::endl;

    return 0;
}