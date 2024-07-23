#include <iostream>
#include <iomanip>

int main(){

    //Declare and initialze the variables
    float number1 {1.12345678901234567890f};
    double number2 {1.12345678901234567890};
    long double number3 {1.12345678901234567890L}; 

    std::cout << "-----------------------------------------" << std::endl;
    //Print out the sizes
    std::cout << "sizeof float: " << sizeof(float) << std::endl;
    std::cout << "sizeof double: " << sizeof(double) << std::endl;
    std::cout << "sizeof long double: " << sizeof(long double) << std::endl;

    std::cout << "-----------------------------------------" << std::endl;

    //Precision
    std::cout << std::setprecision(20); //Control the precision from std::cout.
    std::cout << "number1 is: " << number1 << std::endl;  //7 digits
    std::cout << "number2 is: " << number2 << std::endl;  //15'ish digits
    std::cout << "number3 is: " << number3 << std::endl;  //15+ digits

    std::cout << "-----------------------------------------" << std::endl;

    //Float problems : The precision is ually too limited
    //for a lot of application
    float number4 {192400023.0f};       //Error: narrowing conversion
    double number5 {192400023.0f};      //Also Error because we put "f" at the end and it's treated as float
    double number6 {192400023.0};      //No error since double has 15'ish digits
    std::cout << "number4: " << number4 << std::endl;
    std::cout << "number5: " << number5 << std::endl;
    std::cout << "number6: " << number6 << std::endl;

    std::cout << "-----------------------------------------" << std::endl;

    double number7 {192400023};
    double number8 {1.92400023e8};
    double number9 {1.924e8};               // Can ommit the lower 00023
    double number10 {0.00000000003498};
    double number11 {3.498e-11};            //multiply with 10 exp(-11)

    std::cout << "number7: " << number7 << std::endl;
    std::cout << "number8: " << number8 << std::endl;
    std::cout << "number9: " << number9 << std::endl;
    std::cout << "number10: " << number10 << std::endl;
    std::cout << "number11: " << number11 << std::endl;

    std::cout << "-----------------------------------------" << std::endl;

    //Infinity and Nan
    std::cout << std::endl;
    std::cout << "Infinity and NaN" << std::endl;

    double number12 {5.6};
    double number13{};  //Initialized to 0
    double number14 {}; //Initialized to 0

    //Infinity
    double result { number12 / number13 };

    std::cout << number12 << "/" << number13 << " yields " << result << std::endl;
    std::cout << result << " + " << number12 << " yields " << result + number12 << std::endl;

    std::cout << "-----------------------------------------" << std::endl;

    //NaN
    result = number13 / number14;

    std::cout << number13 << "/" << number14 << " = " << result << std::endl;
    


    return 0;

}