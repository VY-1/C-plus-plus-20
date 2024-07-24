
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
	
   
    return 0;
}
