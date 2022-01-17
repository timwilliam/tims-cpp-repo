#include <iostream>
#include <vector>

class User{
    std::string status = "Gold";
    
    public:
        std::string firstName, lastName;
        std::string getStatus(){
            return status;
        }
};

int addUser(std::vector<User> &users, User user){
    for(int i = 0; i < users.size(); i++){
        if(users[i].firstName == user.firstName &&
            users[i].lastName == user.lastName){
            return i;
        }
    }

    users.push_back(user);
    return users.size() - 1;
}

int main(){
    std::vector<User> users;

    User user1, user2, user3;
    user1.firstName = "tim";
    user1.lastName = "william";
    
    user2.firstName = "dwayne";
    user2.lastName = "johnson";

    user3.firstName = "clark";
    user3.lastName = "kent";

    users.push_back(user1);
    users.push_back(user2);
    users.push_back(user3);

    User user;
    user.firstName = "dwayne";
    user.lastName = "johnson";

    std::cout << addUser(users, user) << std::endl;

    return 0;
}