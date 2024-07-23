#include <iostream>

int main(){

    bool red_light {true};
    bool green_light {false};

    if(red_light == true){
        std::cout << "Stop!" << std::endl;

    }else {
        std::cout << "Go through!" << std::endl;
    }

    //sizeof()
    std::cout << "sizeof(bool): " << sizeof(bool) << std::endl;

    //1 -->> true
    //0 -->> false
    std::cout << std::endl;
    std::cout << "red_light: " << red_light << std::endl;
    std::cout << "green_light: " << green_light << std::endl;

    //To display true or flase use std::boolalpha before the print statements
    std::cout << std::boolalpha;
    std::cout << "red_light: " << red_light << std::endl;
    std::cout << "green_light: " << green_light << std::endl;    

    return 0;
}