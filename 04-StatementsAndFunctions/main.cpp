#include <iostream>


//Function needs to be defined first before we can use it
int addNumbers(int first_param, int second_param){

    int result = first_param + second_param;

    return result;
}

int main(){

    int first_number {3};   //Statement
    int second_number {7};

    std::cout << "First number: " << first_number << std::endl;
    std::cout << "Second number: " << second_number << std::endl;

    int sum = first_number + second_number;
    std::cout << "Sum: " << sum << std::endl;

    sum = addNumbers(25,7);
    std::cout << "Sum: " << sum << std::endl;

    sum = addNumbers(34, 59);
    std::cout << "Sum: " << sum << std::endl;

    std::cout << "Sum: " << addNumbers(2, 56) << std::endl;


    return 0;
}