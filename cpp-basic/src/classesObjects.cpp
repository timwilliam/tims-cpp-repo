#include <iostream>

using namespace std;

// most data can't be represented by only using primitive data types
// so in C++, we have a class, a blueprint for new type of data
class Book{
    public:
        string title, author;
        int pages;
};

int main(){
    // create a book object
    // an object is an actual instance of the class
    Book myBook;
    myBook.title = "Harry Potter"; // attributes
    myBook.author = "J. K. Rowling";
    myBook.pages = 900;

    cout << myBook.title << endl;

    return 0;
}