#include "myMathLib.h"

namespace mathUtil{
    double area(double length){
        return length * length;
    }

    double area(double length, double width){
        return length * width;
    }

    // default value is placed in function declaration, not function definition
    double getPow(double base, int pow){
        int total = 1;
        for(int i = 0; i < pow; i++){
            total *= base;
        }
        return total;
    }
}