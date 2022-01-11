#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){
    ifstream file("hello.txt");
    vector <string> names;
    string input; // the destination and type matters in how the file will be read

    while(file >> input){ // return file
        names.push_back(input);
    }

    for(string name : names){
        cout << name << endl;
    }

    // string line;
    // getline(file, line);
    // cout << line << endl;

    file.close();
    return 0;
}