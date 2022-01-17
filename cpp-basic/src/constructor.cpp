#include <iostream>

using namespace std;

// There are 4 types of function: function, method, static method, constructor (2-4 deals with Object Oriented Programming)
    
// A method is dependent on an object
// - a function put inside an object is known as a method
// - E.g.: user.doStuff() is a method, while doStuff() is a function
// - E.g.: string tacos = "yum", tacos is an object of type string, and string has a method length(), tacos.length()

// A method is attached to an object, while a static method is attached to a class
// - class is a blueprint on how to create an object
// - an instance of a class is an object
// - E.g.:  User user; static method is attached to User, while method is attached to user
//          User.count() -> refers to the whole user, user.speak() -> refers to a specific user

// When creating a class, you can create a special function called a constructor (ctor)
// - difference with normal function is that constructor does not has a return type
// - constructor is used to do something when an object is created from a class
// - make sure that object is created in proper way and is defined in a stable state
// - inside a constructor we can set different data points or call different function depending on the user

// There is also actually a fifth function called destructor
// - it is called when an object is being deleted or no longer in use
// - it is identified by the class name but with a tilde symbol in front of it

// most data can't be represented by only using primitive data types
// so in C++, we have a class, a blueprint for new type of data
class Book{
    public:
        string title, author;
        int pages;

        // a constructor is a function that gets called everytime we create an object of a class
        // constructor to create object, and initialize it
        // constructor used the same name as a class and does not has a return value
        Book(){
            title = "No Title";
            author = "No Author";
            pages = 0;
        }

        // we can also create multiple constructor
        Book(string aTitle, string aAuthor, int aPages){
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }
};

int main(){
    // create a book object
    // an object is an actual instance of the class
    Book myBook("Harry Potter", "J. K. Rowling", 500);
    Book anotherBook;

    cout << myBook.title << endl;
    cout << anotherBook.title << endl;

    return 0;
}