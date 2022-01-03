#include <iostream>

using namespace std;

int main(void){
    string phrase = "timwilliam";

    // string functions
    cout << "Phrase is " << phrase << endl;
    cout << "Phrase length = " << phrase.length() << endl;
    cout << "First character in phrase is " << phrase[0] << endl; // c++ starts counting from 0

    // we can modify a character in a string
    phrase[0] = 'T';
    cout << "New phrase is " << phrase << endl;

    // find a character/string in a string
    cout << "The char 'a' is in position " << phrase.find('a', 0) << " in the phrase" << endl; // 0 is the starting pos for find()
    cout << "The string \"william\" is in position " << phrase.find("william", 0) << " in the phrase" << endl;

    string subPhrase = phrase.substr(3, 4); // starts from 3, take 4 characters
    cout << "Substring taken from the phrase using substr(): " << subPhrase << endl;

    return 0;
}