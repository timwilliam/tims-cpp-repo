#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){
    // input stream : what we typed in with a keyboard
    // output stream: data from program and output it to our console

    // the stream actually goes first to a buffer, then periodically this chunks of data from the buffer is sent to the program
    // e.g.: data in buffer sent to the program until you finished typing and press enter

    // this stream also extended for file, in linux/mac file extension does not mean anything, but on windows it changes how the file is being read

    // cin is an object of the istream class, there is also ifstream for input file stream, ofoutput for outputting custom object

    string filename;
    cin >> filename;

    // with file we need to create a new object first
    // ofstream file;
    // file.open(filename);
    // or the following shorter version
    ofstream file (filename); // can add argument for appending and stuff

    if(file.is_open()){
        cout << "Open file success!\n";
    }

    vector <string> names;
    names.push_back("tim");
    names.push_back("william");

    for(string name : names){
        file << name << endl;
    }

    file.close();
    return 0;
}