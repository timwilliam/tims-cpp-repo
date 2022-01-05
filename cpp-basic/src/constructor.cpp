#include <iostream>

using namespace std;

// most data can't be represented by only using primitive data types
// so in C++, we have a class, a blueprint for new type of data
class Book{
    public:
        string title, author;
        int pages;

        // a constructor is a function that gets called everytime we create an object of a class
        // constructor to create object, and initialize it
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