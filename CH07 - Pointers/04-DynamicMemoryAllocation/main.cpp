#include <iostream>

int main(){



    //Bad initialization
    //int *will_crash;
    //int *will_crash {};
    //*will_crash = 47;   //writing 47 to unknown memory address used by other application

    //Dynamically allocate space for a single int on the heap. This memory belongs to your program from now on.
    //The system can't use it for anything else, until we return it.
    //After this line executes, we will have a valid mmemory location allocated. The size of the allocated memory will be such that
    // it can store the type pointed to by the pointer

    //Initialize the pointer with dynamic memory. Dynamically allocate memory at run time and make a pointer point to it.

    int *p_number4 {nullptr};
    p_number4 = new int;

    //Writing into dynamically allocated memory
    *p_number4 = 77;    //this will store on the memory Heap and not the memory Stack.
    int number4_1 = 34; //this is a memory stored in the Stack. Will automatically gets deleted once exit program or out of scope

    std::cout << std::endl;
    std::cout << "Dynamically allocating memory: " << std::endl;
    std::cout << "*p_number4: " << *p_number4 << std::endl;
    std::cout << "p_number4: " << p_number4 << std::endl;   //display the address where memory is stored

    //Releasing and Resetting the memory held by pointer
    delete p_number4;   //returning the memory back to the Operating System
    p_number4 = nullptr;    //set it to nullptr the let it knows you don't have anything stored in that memory data

    std::cout << "---------Pre-Initialize new pointer upon declaration-----------" << std::endl;
    int *p_number5{ new int};   //Memory location contains junk value
    int *p_number6{ new int (22) }; //use direct initialization
    int *p_number7{ new int {23}};  //use uniform initialization

    std::cout << std::endl;
    std::cout << "Initialize with valid memory address at declaration: " << std::endl;
    std::cout << "p_number5: " << p_number5 << std::endl;
    std::cout << "*p_number5: " << *p_number5 << std::endl;


    std::cout << "p_number6: " << p_number6 << std::endl;
    std::cout << "*p_number6: " << *p_number6 << std::endl;

    std::cout << "p_number7: " << p_number7 << std::endl;
    std::cout << "*p_number7: " << *p_number7 << std::endl;    

    //Remember to release the memory
    delete p_number5;
    p_number5 = nullptr;

    delete p_number6;
    p_number6 = nullptr;

    delete p_number7;
    p_number7 = nullptr;

    //Never delete a memory twice. This will cause a crash
    //delete p_number7;
    //p_number7 = nullptr;




    return 0;
}