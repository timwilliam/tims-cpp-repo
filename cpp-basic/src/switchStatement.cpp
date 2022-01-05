#include <iostream>

using namespace std;

string getDay(int dayNum){
    string day;

    switch(dayNum){
        case 0: return "Sunday";
        case 1: return "Monday";
        case 2: return "Tuesday";
        case 3: return "Wednesday";
        case 4: return "Thursday";
        case 5: return "Friday";
        case 6:
            day = "Saturday";
            break;
        default: 
            day = "Invalid number!";
            break;
    }

    return day;
}

int main(){
    cout << getDay(10) << endl;

    return 0;
}