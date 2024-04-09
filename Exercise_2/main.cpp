#include <iostream>
#include "ComplexNumber.hpp"

int main() {
    // Test ComplexNumber class
    ComplexNumber a(1, 2);
    ComplexNumber b(1, -2);
    ComplexNumber c = a + b;

    // Writing complex numbers on standard output
    std::cout << "a = ";
    a.display();
    std::cout << std::endl;

    std::cout << "b = ";
    b.display();
    std::cout << std::endl;

    std::cout << "c = ";
    c.display();
    std::cout << std::endl;

    // Testing equality operator
    if (a == b)
        std::cout << "a and b are equal" << std::endl;
    else
        std::cout << "a and b are not equal" << std::endl;

    // Computing and displaying conjugate
    std::cout << "Conjugate of a: ";
    a.conjugate().display();
    std::cout << std::endl;

    return 0;
}

