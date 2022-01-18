#include <iostream>

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

        User(std::string firstName, std::string lastName, std::string status){
            this->firstName = firstName;
            this->lastName = lastName;
            this->status = status;
            userCount++;
        }

        ~User(){
            userCount--;
        }

        // friend method, used to create a function that can access the private data member directly without setters and getters
        friend std::ostream& operator << (std::ostream& output, const User user);

};
int User::userCount = 0;

std::ostream& operator << (std::ostream& output, User user){
    output << "First Name: " << user.firstName << ", Last Name: " << user.lastName << ", Status: " << user.status;
    return output;
}

std::istream& operator >> (std::istream& input, User &user){
    input >> user.firstName >> user.lastName; // escape whitespaces
    return input;
}

int main(){
    User user("tim", "william", "Gold");
    std::cout << user << std::endl;
    return 0;
}
