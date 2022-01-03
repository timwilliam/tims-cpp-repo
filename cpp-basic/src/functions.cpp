#include <iostream>

using namespace std;

// a function needs to know what data type the value it will return
// in this case we will not return anything and we put it a 'void' data type
void sayHello(){
    cout << "Hello World!\n";
}

// note that we need to put a function stub (empty function) if a function is written after the main function
void sayHelloWithParameter(string name, int id);

// the code inside a function executes by default
int main(void){
    // we call the sayHello() function with the following
    sayHello();
    sayHelloWithParameter("tim", 99);

    return 0;
}

void sayHelloWithParameter(string name, int id){
    cout << "Hello " << name << ", your ID is " << id << endl;
}