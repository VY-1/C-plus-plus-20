#include <iostream>

int main(){

    std::cout << "---------Braced Initializers------------" << std::endl;

    //Braced initializers
    //Variable may contain random garbage value . WARNING
    int elephant_count;

    int lion_count{}; //Initializes to zero

    int dog_count {10}; //Initializes to 10

    int cat_count {15}; //Initializes to 15

    //Can use expression as initializer
    int domesticated_animals { dog_count + cat_count};

    //int narrowing_conversion {2.9};   //will not compile due to improper conversion

    std::cout << "Elephant count: " << elephant_count << std::endl;
    std::cout << "Lion count: " << lion_count << std::endl;
    std::cout << "Dog count: " << dog_count << std::endl;
    std::cout << "Cat count: " << cat_count << std::endl;
    std::cout << "Domesticated animal count: " << domesticated_animals << std::endl;

    std::cout << "---------Functional Initializers-----------" << std::endl;

    //Functional Initializers
    int apple_count(5);
    int orange_count(10);
    int fruit_count (apple_count + orange_count);

    //Information lost. less safe than braced initializers, but will compile
    int narrowing_conversion_functional (2.9);

    std::cout << "Apple count: " << apple_count << std::endl;
    std::cout << "Orange count: " << orange_count << std::endl;
    std::cout << "Fruit count: " << fruit_count << std::endl;
    std::cout << "Narrowing Conversion: " << narrowing_conversion_functional << std::endl;

    std::cout << "----------Assignment Initializers-----------" << std::endl;
    
    //Assignment Initializers
    int bike_count = 2;
    int truck_count = 7;
    int vehicle_count = bike_count + truck_count;
    int narrowing_conversion_assignment = 2.9;  //works like functional initializers with info lost.

    std::cout << "Bike count: " << bike_count << std::endl;
    std::cout << "Truck count: " << truck_count << std::endl;
    std::cout << "Vehicle count: " << vehicle_count << std::endl;
    std::cout << "Narrowing Conversion: " << narrowing_conversion_assignment << std::endl;

    //Check the size with sizeof
    std::cout << "sizeof int: " << sizeof(int) << std::endl;    //will display size in bytes, integer will take up 4 bytes
    std::cout << "sizeof truck_count: " << sizeof(truck_count) << std::endl;    //will display 4 bytes, since it's also an integer

    return 0;

}