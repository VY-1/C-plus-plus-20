#include <iostream>


int main(){

    //Declaring pointers
    int * p_number {};  //can only store an address of a variable of type int

    double * p_fractional_number{}; //can only store an address of a varialbe of type double

    //Explicitely initialize to nullptr. All pointers have the same size, no matter what datatype of pointers.
    int * p_number1{nullptr};
    int * p_fractoinal_number1 {nullptr};

    //We know that pointers store addresses of variables
    int int_var {43};
    int *p_int {&int_var};  //The address of operator (&);

    std::cout << "int_var: " << int_var << std::endl;
    std::cout << "p_int (Address in memory): " << p_int << std::endl;
    
    //You can also change the address stored in a pointer any time
    int int_var1 {65};
    int_var1 = 126;

    p_int = &int_var1;  //Assign a different address to the pointer
    std::cout << "p_int (with different address): " << p_int << std::endl;

    //Dereferencing a pointer:
    int* p_int2 {nullptr};
    int int_data {56};
    p_int2 = &int_data;

    std::cout << "value: " << *p_int2 << std::endl; //use *p_int2 to dereference and pointer and get the value stored in that pointer address
    




    return 0;
}