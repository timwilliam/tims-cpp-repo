#include <iostream>

using namespace std;

int main(){
    bool pass = true;
    if(pass) {
        cout << "You pass the course!\n";
    } else {
        cout << "You fail the course!\n";
    }

    int examGrade = 90; 
    int attendanceGrade = 85;
    if(examGrade >= 85 && attendanceGrade >= 85) {
        cout << "You pass the course with Grade A!\n";
    } else if(examGrade >= 75 && attendanceGrade >= 75) {
        cout << "You pass the course with Grade B!\n";
    } else {
        cout << "You fail the course!\n";
    }

    return 0;
}