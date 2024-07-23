#include <iostream>

int main(){

    int value {5};

    //Increment by one
    value = value + 1;  //6
    std::cout << "The value is: " << value << std::endl;

    value = 5; //Reset value to 5

    //Decrement by one
    value = value - 1; //4
    std::cout << "The value is: " << value << std::endl;

    //----------------------------------------------------------------
    
    std::cout << "--------Postfix increment and decrement---------" << std::endl;

    value = 5;
    std::cout << "The value is (incrementing): " << value++ << std::endl; //5
    std::cout << "The value is: " << value <<std::endl; //6

    std::cout << std::endl;

    //Decrement and postfix
    value = 5;
    std::cout << "The value is (decrementing): " << value-- << std::endl;
    std::cout << "The value is: " << value << std::endl;
    
    return 0;
}