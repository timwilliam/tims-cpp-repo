#include <iostream>

// static is only associated with the class, usually stuff that represents the entire population rather than specific object
// - static member can only access other static member

class User{
    std::string status = "Gold";
    static int userCount;

    public:
        std::string firstName, lastName;
    
        static int getUserCount(){
            return userCount;
        }

        void setStatus(std::string status){
            if(status == "Gold" || status == "Silver" || status == "Bronze"){
                this->status = status;
            }
        }
    
        std::string getStatus(){
            return status;
        }

        User(){
            userCount++;
        }

        User(std::string firstName, std::string lastName, std::string status){
            this->firstName = firstName;
            this->lastName = lastName;
            this->status = status;
            userCount++;
        }

        ~User(){
            userCount--;
        }
};
// need to define static variable outside of class
int User::userCount = 0;

int main(){
    User user1, user2;
    std::cout << User::getUserCount() << std::endl;

    user1.~User();
    std::cout << User::getUserCount() << std::endl;
    return 0;
}