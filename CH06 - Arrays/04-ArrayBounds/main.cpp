#include <iostream>

int main(){
    int numbers[] {1,2,3,4,5,6,7,8,9,0};

    //Read beyond bounds: Will read garbage or crash your program
    std::cout << "numbers[12]: " << numbers[12] << std::endl;

    //Write beyond bounds. The compiler will allows it. But you don't own the memory at that index.

    numbers[1299999] = 1000;

    std::cout << "numbers[1299999]: " << numbers[1299999] << std::endl;


    return 0;
}