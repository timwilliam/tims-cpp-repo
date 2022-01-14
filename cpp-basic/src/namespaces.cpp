#include <iostream>

// std::string
// - string belong to the std namespace
// - inside this std namespace we have string, vector, etc
// - namespace helps to avid naming conflicts
// - there are limited number of possible name for things, as we try to use name that make sense

// using namespace std;
// - when doing this, we dont have to prefix anything with std anymore, but this increase the risk naming conflicts

// We can also create our custom namespace
// - for helping with grouping common functionality together
// - you can also group code from a particular project or group
// - allows us to classifying/categorize things and change which one we want to use depending on the namespace

namespace myUtil{
    void printArray(const int data[], int size){
        for(int i = 0; i < size; i++){
            std::cout << data[i] << "\t";
        }
        std::cout << std::endl;
    }
}

// using namespace myUtil;

int main(){
    int data[] = {1, 2, 3, 4, 5};
    myUtil::printArray(data, 5);

    return 0;
}