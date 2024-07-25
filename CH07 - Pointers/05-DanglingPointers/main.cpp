#include <iostream>

int main(){

    //Dangling pointer is a pointer that doesn't point to a valid memory address. Trying to dereference and use a dangling pointer will result in undefined behavior

    //Case 1 : Uninitialized poionter
    int *p_number;  //Dangling uninitialized pointer
    //Case 2 : Call a deleted pointer after it already been deleted
    delete p_number;

    int *p_number2 {new int(32)};

    delete p_number2;
    p_number2 = nullptr;
    std::cout << "*p_number: " << *p_number2 << std::endl;


    std::cout << std:: endl;

    //Case 3 : Multiple pointers pointing to the same address
    int *p_number3 {new int {83}};
    int *p_number4 {p_number3};
    std::cout << "p_number3 - " << p_number3 << " - " << *p_number3 << std::endl;
    std::cout << "p_number4 - " << p_number4 << " - " << *p_number4 << std::endl;

    //Deleteing p_number3
    delete p_number3;

    //p_number4 points to a deleted memory. Dereferincing will lead to undefined behavior: crash/ garbage
    std::cout << "p_number4(after deleting p_number3) - " << p_number4 << " - " << *p_number4 << std::endl;

    //Solutions to avoid this type if errors
    /*
    1. Initialize your pointers
    2. Reset pointers after delete
    3. For multiple pointers to same address, make sure the owner pointer is very clear
    */
    //Solution 1: Initialize your pointers immediately
    int *p_number5{};
    int *p_number6{new int(87)};

    //Check for nullptr before use

    if(p_number6!= nullptr){
        std::cout << "*p_number6: " << *p_number6 << std::endl;

    }else{
        std::cout << "Invalid address " << std::endl;
    }

    //Solution 2:
    int *p_number7{new int{82}};

    //Use the pointer however you want
    std::cout << "p_number7 - " << p_number7 << " - " << *p_number7 << std::endl;

    delete p_number7;
    p_number7 = nullptr;    //Reset the pointer

    //Check for nullptr before use
    if(p_number7!=nullptr){
        std::cout << "*p_number7: " << *p_number7 << std::endl;
    }else{
        std::cout << "Invalid memory access!" << std::endl;
    }

    //Solution 3:
    int * p_number8 {new int{382}}; //Let's say p_number8 is the master pointer
    int *p_number9 {p_number8}; //assigned to p_number8 pointer

    //Dereference the pointers and use them
    std::cout << "p_number8 - " << p_number8 << " - " << *p_number8 << std:: endl;
    if(!(p_number8 == nullptr)){    //Only use slave pointers when master pointer is valid
        std::cout << "p_number9 - " << p_number9 << " - " << *p_number9 << std::endl;

    }

    delete p_number8;   //Master releases the memory
    p_number8 = nullptr;

    if(!(p_number8 == nullptr)){    //Only use slave pointers when master pointer is valid
        std::cout << "p_number9 - " << p_number9 << " - " << *p_number9 << std::endl;

    }else{
        std::cerr << "WARNING: Trying to use an invalid pointer" << std::endl;

    }

    return 0;

}