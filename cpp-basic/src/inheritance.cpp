#include <iostream>

using namespace std;

// original class, or also called superclass
class Chef{
    public:
        void makeChicken(){
            cout << "The chef makes chicken\n";
        }

        void makeSalad(){
            cout << "The chef makes salad\n";
        }

        void makeSpecialDish(){
            cout << "The chef makes bbq dish\n";
        }
};

// inheritance is when we define class, and we define other classes that extends the functionality of the original class
// also called subclass
class ItalianChef : public Chef{
    public:
        void makePasta(){
            cout << "The chef makes pasta\n";
        }

        // override
        void makeSpecialDish(){
            cout << "The chef makes parm\n";
        }
};

int main(){
    Chef chef;
    chef.makeChicken();
    chef.makeSpecialDish();

    ItalianChef chef2;
    chef2.makeChicken();
    chef2.makePasta();
    chef2.makeSpecialDish();

    return 0;
}