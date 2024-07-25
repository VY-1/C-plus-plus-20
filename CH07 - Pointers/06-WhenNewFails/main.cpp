#include <iostream>

int main(){

    /*
    int * data = new int[10000000000000000]; // Too large, cause bad_alloc. Ran out of Heap memory

    //this will fail due to Heap memory running out.
    for(size_t i{0} ; i < 10000000 ; ++i){
        int * data = new int[100000000];
    }
    
    */

   //exception to handle this issue with try and catch
   
    for(size_t i{0} ; i < 100 ; ++i){
        try{
            int * data = new int[1000000000];
        }catch(std::exception& ex){
            std::cout << "  Something went wrong : " << ex.what() << std::endl;
        }
    }
    


   //std::nothrow to handle memory allocation issue
    for(size_t i{0} ; i < 100 ; ++i){
   
        int * data = new(std::nothrow) int[1000000000];

        if(data!=nullptr){
            std::cout << "Data allocated" << std::endl;
        }else{
            std::cout << "Data allocation failed" << std::endl;
        }
       
    }


    std::cout << "Program ending well" << std::endl;
    
    return 0;
}