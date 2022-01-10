#include <iostream>
#include <vector> 

void printVector(std::vector<int> data){
    // note that the variable data here is a copy of the data fed into the function
 
    for(int i = 0; i < data.size(); i++){
        std::cout << data[i] << std::endl;
    }

    return;
}

int main(){
    // we have array, vector, and templatize array
    // vector (also known as list in other language) supports for dynamic array, can add more element as you go
    // note that array is statically size, while vector is dynamically sized
    // templatized array is a normal array that is wrapped inside of object
    // it can be tricky to keep track of the size of an array, a vector knows it size

    // a collection refers to an array, vector or anything that can store multiple data in a variable
    // vector itself is a templatize data structure (see the <int> sign), because we can pass in data type we are working with
    
    std::vector <int> data = {1, 2, 3};
    std::cout << data[data.size()-1] << std::endl;

    data.push_back(12);
    std::cout << data[data.size()-1] << std::endl;

    data.pop_back();
    std::cout << data[data.size()-1] << std::endl;

    // other available methods: size(), max_size(), front(), back(), etc.

    printVector(data);

    return 0;
}
