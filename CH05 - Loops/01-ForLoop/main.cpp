#include <iostream>

int main(){

	//Print I love C++ 10 times : The bad way
    /*
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    std::cout << "I love C++" << std::endl;
    */

   //for loop : the good way
    /*
   for( unsigned int i{0} ; i < 10000 ;++i){
       //Whatever we want the loop to run
       std::cout << i <<  " : I love C++" << std::endl;
   }
   std::cout << "Loop done!" << std::endl;
   */

  //Use size_t : a representation of some unsigned int for positive numbers [sizes]
  /*
  for(size_t i{0} ; i < 10 ; ++i){
      std::cout << i << " : I love C++" << std::endl;
  }
  std::cout << "Loop done!" << std::endl;
  */
    /*
    //sizeof(size_t)
    std::cout << "sizeof(size_t) : " << sizeof(size_t) << std::endl;
    */


    //Scope of the iterator
    /*
    for(size_t i{0} ; i < 10 ; ++i){
        std::cout << i << " : I love C++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;
    // std::cout << "i : " << i << std::endl;Compiler error : i is not in scope
    */


   //Iterator declared outside the loop
   /*
    size_t i{0}; // Iterator defined outside

    for(i ; i < 10 ; ++i){
        std::cout << i << " : I love C++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;
    std::cout << "i : " << i << std::endl;
    */


    //Leave out the iterator declaration part
    /*
    size_t i{0}; // Iterator defined outside

    for(  ; i < 10 ; ++i){
        std::cout << i << " : I love C++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;
    std::cout << "i : " << i << std::endl;
    */


   //Don't hard code values : BAD!

    const size_t COUNT{100};

    for(size_t i{0} ; i < COUNT ; ++i){
        std::cout << i << " : I love C++" << std::endl;
    }
    std::cout << "Loop done!" << std::endl;

    //For Loop with Multiple Declarations
    for (size_t i{0} , x {5}, y{22} ; y > 15 ; ++i , x+=5 , y-=1){
        std::cout << "i: " << i << ", x : " << x << ", y : " << y << std::endl;

    }


    std::cout << "------------Range Based For Loop------------" << std::endl;
    //Range Based For Loop

    int bag_of_values [] {1,2,3,4,5,6,7,8,9,10}; // This is a collection of integers
    // The variable value will be assigned a value from the values array on each iteration
	
    /*
    for(size_t i {0} ; i < 10 ; ++i){
        std::cout << "value : " << bag_of_values[i] << std::endl;
    }
    */
	

    /*
    for (int value : bag_of_values){
        //value holds a copy of the current iteration in the whole bag
        std::cout << " value : " << value << std::endl;
    }
    */


   //Specify the collection in place
   /*
    for (int value : {1,2,3,4,5,6,7,8,9,10}){
        //value holds a copy of the current iteration in the whole bag
        std::cout << " value : " << value << std::endl;
    }
    */

   //Auto type deduction
	for (auto value : {1,2,3,4,5,6,7,8,9,10}){
        //value holds a copy of the current iteration in the whole bag
        std::cout << " value : " << value << std::endl;
    }
   
    return 0;
}