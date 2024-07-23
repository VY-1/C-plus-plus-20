#include <iostream>

int main(){

    int number1 = 15; //Decimal
    int number2 = 017;  //Octal = 15 in Decimal
    int number3 = 0x0F; //Hexadecimal = 15 in Decimal
    int number4 = 0b00001111; //Binary = 15 in Decimal

    std::cout << "number1: " << number1 << std::endl;
    std::cout << "number1: " << number2 << std::endl;
    std::cout << "number1: " << number3 << std::endl;
    std::cout << "number1: " << number4 << std::endl;
    

    return 0;
}