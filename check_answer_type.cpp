#include <iostream>
#include <typeinfo>

int main() {
    int integer = 5;
    double decimal = 3.14;
    std::string stringtype = "Hello";

    std::cout << "Type of integer: " << typeid(integer).name() << std::endl;   //
    std::cout << "Type of decimal: " << typeid(decimal).name() << std::endl;
    std::cout << "Type of stringtype: " << typeid(stringtype).name() << std::endl;

    return 0;
}
