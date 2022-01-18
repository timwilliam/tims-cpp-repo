#include <iostream>
#include <string>
#include "user.h"

int User::getUserCount(){
    return userCount;
}

void User::setStatus(std::string status){
    if(status == "Gold" || status == "Silver" || status == "Bronze"){
        this->status = status;
    }
}

std::string User::getStatus(){
    return status;
}

User::User(){
    std::cout << "User created\n";
    userCount++;
}

User::User(std::string firstName, std::string lastName, std::string status){
    this->firstName = firstName;
    this->lastName = lastName;
    this->status = status;
    userCount++;
}

User::~User(){
    userCount--;
}

void User::output(){
    std::cout << "I am a user\n";
}

// friend method, used to create a function that can access the private data member directly without setters and getters
std::ostream& operator << (std::ostream& output, const User user);
std::istream& operator >> (std::istream &input, User &user);

int User::userCount = 0;

std::ostream& operator << (std::ostream& output, User user){
    output << "First Name: " << user.firstName << ", Last Name: " << user.lastName << ", Status: " << user.status;
    return output;
}

std::istream& operator >> (std::istream& input, User &user){
    input >> user.firstName >> user.lastName; // escape whitespaces
    return input;
}