#ifndef USER_H
#define USER_H

#include <string>

class User{
    std::string status = "Gold";
    static int userCount;

    public:
        std::string firstName, lastName;
    
        static int getUserCount();

        void setStatus(std::string status);
        
        std::string getStatus();

        User(std::string firstName, std::string lastName, std::string status);
        User();
        ~User();

        virtual void output(); // polymorphism; override in subclasses

        friend std::ostream& operator << (std::ostream& output, const User user);
        friend std::istream& operator >> (std::istream &input, User &user);

};

#endif