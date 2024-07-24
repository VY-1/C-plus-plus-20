#include <iostream>

int main(){

    //Declare array
    char message [] {'H','e','l','l','o'};

    //Print out the array of char
    std::cout << "message: ";
    for(auto c: message){
        std::cout << c;
    }

    std::cout << std::endl;
    std::cout << "size: " << std::size(message) << std::endl;

    //Null termination with '\0' to avoid garbage after end of the char or string
    char message2[] {'H','e','l','l','o','\0'};
    std::cout << "sizeof: " << sizeof(message2) << std::endl;

    char message3[]{"Hello"};   //An implicit '\0' character is appended to the end of the string; Null terminator will autofill since it's a string
    std::cout << "sizeof: " << sizeof(message3) << std::endl;

    std::cout << "size: " << (message3) << std::endl;

    char message4[6] {'H','e','l','l','o'}; //Null terminator will autofill since we spacified 6 arrays
    std::cout << "sizeof: " << sizeof(message4) << std::endl;






    return 0;
}