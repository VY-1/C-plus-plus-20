
#include <iostream>


int main(){

	int max{};
    
    int a{35};
    int b{200};
	
    std::cout << std::endl;
	std::cout << "using regular if " << std::endl;
	
    /*
    if(a >  b){
        max = a;
    }else{
        max = b;
    }
    */


    //max = (condition)? option1 : option2
    // option1 = if true; option2 = if false
    max = (a > b)? a : b; // Ternary operator; same as if true, choose a else choose b; max gets assigned to b since it's false
	
    std::cout << "max : " << max << std::endl;

    auto max1 = (a > b)? a: 22.5f; //Ternary operation. Auto max1 will assign to float with 22.5
    std::cout << "max1: " << max1 << std::endl;

    //Ternary Initialization
    std::cout << std::endl;
    std::cout << "speed" << std::endl;
    bool fast = false;

    int speed { fast? 300: 150};    //speed = 150, since fast is false

    std::cout << "The speed is: " << speed << std::endl;
	
   
    return 0;
}
