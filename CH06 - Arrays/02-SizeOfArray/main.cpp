#include <iostream>

int main(){

    int scores[] {10,12,15,11,18,17,22,23,24};

    //Can get the size with std::size
    std::cout << "scores size: " << std::size(scores) << std::endl;

    //Print data
    for(size_t i {0}; i < std::size(scores); i++){
        std::cout << "scores[" << i << "]: " << scores[i] << std::endl;

    }

    //Range based for loop
    for(auto i: scores){
        std::cout << "value: " << i << std::endl;
    }

    return 0;
}