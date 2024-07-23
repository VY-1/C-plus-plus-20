#include <iostream>

int main(){
    //int; 4 bytes
    //unsigned int; 4 bytes; [0 to 4,294,967,295]
    //signed int; 4 bytes; [-2,147,483,648 to 2,147,483,647]

    //short; 2 bytes
    //signed short; signed short int; 2 bytes
    //unsigned short; unsigned short int; 2 bytes

    //long; 4 or 8 bytes
    //long long; 8 bytes

    int value1 {10};
    int value2 {-300};

    //signed int value1 {10};   //will work
    //signed int value2 {-300}; //will work

    //unsigned int value1 {10};   //will work
    //unsigned int value2 {-300}; //will not work, becuase of negative number

    std::cout << "value1: " << value1 << std::endl;
    std::cout << "value2: " << value2 << std::endl;
    std::cout << "sizeof(value1): " << sizeof(value1) << std::endl;
    std::cout << "sizeof(value2): " << sizeof(value2) << std::endl;




    return 0;
}