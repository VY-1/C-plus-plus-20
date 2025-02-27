#include <iostream>

int main(){


    //auto keyword to auto detect the types; auto deduction
    auto var1 {12};
    auto var2 {13.0};
    auto var3 {14.0f};
    auto var4 {15.0l};
    auto var5 {'e'};

    //int modifier suffix
    auto var6 { 123u};  //unsigned
    auto var7 { 123ul}; //unsigned long
    auto var8 { 123ll}; //long long

    std::cout << "var1 occupies: " << sizeof(var1) << " bytes" << std::endl;
    std::cout << "var2 occupies: " << sizeof(var2) << " bytes" << std::endl;
    std::cout << "var3 occupies: " << sizeof(var3) << " bytes" << std::endl;
    std::cout << "var4 occupies: " << sizeof(var4) << " bytes" << std::endl;
    std::cout << "var5 occupies: " << sizeof(var5) << " bytes" << std::endl;
    std::cout << "var6 occupies: " << sizeof(var6) << " bytes" << std::endl;
    std::cout << "var7 occupies: " << sizeof(var7) << " bytes" << std::endl;
    std::cout << "var8 occupies: " << sizeof(var8) << " bytes" << std::endl;

    std::cout << "----------------------------------" << std::endl;

    auto var9 {333u}; //Declare and initialize with type deduction; unsigned

    std::cout << "var9: " << var9 << std::endl;

    var9 = -22; //Assign negative number. DANGER! var9 was unsigned. It will put in garbage value

    std::cout << "var9: " << var9 << std::endl; //Display garbage values

    return 0;

}