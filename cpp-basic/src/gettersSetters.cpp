#include <iostream>

using namespace std;

class Movie{
    // public means that any other code outside of this class can access it
    // we can also use other keyword like 'private', this means that only code inside of the class can access the atrribute
    private:
        string rating;
    public:
        string title, director;
        
        // constructor Movie() has access to rating because they are in the same class
        Movie(string aTitle, string aDirector, string aRating){
            title = aTitle;
            director = aDirector;
            setRating(aRating);
        }

        // setters
        void setRating(string aRating){
            if(aRating == "G" || aRating == "R" || aRating == "PG-13" || aRating == "NR")
                rating = aRating;
            else
                rating = "NR";
        }

        // getters
        string getRating(){
            return rating;
        }
};

int main(){
    Movie avengers("The Avengers", "Joss Whedon", "PG-13");

    avengers.setRating("TEST");

    // with setters and getters, we can control what value a user can store in the class

    // this code below won't work since rating is private, need getters
    // cout << avengers.rating <<  endl;

    cout << avengers.getRating() << endl;

    return 0;
}