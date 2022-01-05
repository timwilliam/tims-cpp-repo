#include <iostream>

using namespace std;

class Student{
    public:
        string name, major;
        double gpa;

        Student(string aName, string aMajor, double aGpa){
            name = aName;
            major = aMajor;
            gpa = aGpa;
        }

        // object function is a function that we can put inside one of our classes
        // so that different objects of that class can use the function, to find out information, or modify information
        bool hasHonors(){
            if(gpa >= 3.5)
                return true;
            else
                return false;
        }
};


int main(){
    Student student1("tim", "Computer Science", 2.7);
    Student student2("william", "Social Science", 3.7);

    cout << student1.hasHonors() << endl;
    cout << student2.hasHonors() << endl;

    return 0;
}