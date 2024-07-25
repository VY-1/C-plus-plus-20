#include <iostream>

int main(){

    //Verbose nullptr check

    int *p_number{new int(45)};    //Initialized to nullptr

    /*
    if(!(p_number==nullptr)){
        std::cout << "p_number points to a VALID address: " << p_number << " equal: " << *p_number << std::endl;
    }else{
        std::cout << "p_number points to an INVALID address. " << std::endl;
    }
    */

    if(p_number){
        std::cout << "p_number points to a VALID address: " << p_number << " equal: " << *p_number << std::endl;
    }else{
        std::cout << "p_number points to an INVALID address. " << std::endl;
    }

    delete p_number;
    nullptr;

    //It's OK call delete on a nullptr
    int *p_number1{};

    delete p_number1;   //This won't cause any problem if p_number1 contains nullptr

    return 0;
}