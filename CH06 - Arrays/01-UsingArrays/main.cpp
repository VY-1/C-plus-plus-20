#include <iostream>

int main(){
    //Declaring an array
    int scores[10]; //An array stroring 10 integers

    //Reading values
    std::cout << std::endl;
    std::cout << "Reading out score values (manually): " << std::endl;
    std::cout << "score[0]: " << scores[0] << std::endl;
    std::cout << "score[0]: " << scores[1] << std::endl;
    std::cout << "score[0]: " << scores[2] << std::endl;
    std::cout << "score[0]: " << scores[3] << std::endl;
    //........
    std::cout << "score[0]: " << scores[9] << std::endl;

    //Writing values to array
    scores[0] = 3;
    scores[2] = 5;
    scores[9] = 15;

    for(size_t i {0}; i < 10; i++ ){
        scores[i] = i * 10;
    }    

    for(size_t i {0}; i < 10; i++ ){
        std::cout << "scores[" << i << "]: " << scores[i] << std::endl;
    }

    //Pre initialize array with values
    int families[5] {12, 7, 5};

    for(size_t i {0}; i < 5; i++ ){
        std::cout << "families[" << i << "]: " << families[i] << std::endl;
    }


    //Omit the size of the array at declaration
    int class_sizes[] {10,12,15,11,18,17};
    //forEach
    for(auto value: class_sizes){
        std::cout << "value: " << value << std::endl;
    }

    //Constant arrays, can't be modified.
    const int multipliers [] {22,30,15};
    //multipliers[1] = 20;         // will not work

    


    return 0;
}