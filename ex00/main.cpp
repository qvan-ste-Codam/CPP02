#include <iostream>

#include "Fixed.hpp"

int main(void) {
    Fixed a;
    Fixed b(a);
    Fixed c;
    c = b;
    std::cout << "A: " << a.getRawBits() << std::endl;
    a.setRawBits(100);
    std::cout << "A: " << a.getRawBits() << std::endl;
    std::cout << "B: " << b.getRawBits() << std::endl;
    b.setRawBits(10);
    std::cout << "B: " << b.getRawBits() << std::endl;
    std::cout << "C: " << c.getRawBits() << std::endl;
    c.setRawBits(5);
    std::cout << "C: " << c.getRawBits() << std::endl;
}
