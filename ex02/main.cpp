#include <iostream>

#include "Fixed.hpp"

int main() {
    {
        Fixed a;
        Fixed b(10);
        Fixed c(42.42f);
        Fixed d(b);
        Fixed e;

        e = c;

        std::cout << "a: " << a << std::endl;
        std::cout << "b: " << b << std::endl;
        std::cout << "c: " << c << std::endl;
        std::cout << "d: " << d << std::endl;
        std::cout << "e: " << e << std::endl;

        std::cout << "a is " << a.toInt() << " as integer" << std::endl;
        std::cout << "b is " << b.toInt() << " as integer" << std::endl;
        std::cout << "c is " << c.toInt() << " as integer" << std::endl;
        std::cout << "d is " << d.toInt() << " as integer" << std::endl;
        std::cout << "e is " << e.toInt() << " as integer" << std::endl;

        std::cout << "a + b: " << a + b << std::endl;
        std::cout << "c - b: " << c - b << std::endl;
        std::cout << "b * c: " << b * c << std::endl;
        std::cout << "c / b: " << c / b << std::endl;

        std::cout << "b > a: " << (b > a) << std::endl;
        std::cout << "b < c: " << (b < c) << std::endl;
        std::cout << "b >= d: " << (b >= d) << std::endl;
        std::cout << "b <= c: " << (b <= c) << std::endl;
        std::cout << "b == d: " << (b == d) << std::endl;
        std::cout << "b != c: " << (b != c) << std::endl;

        std::cout << "++b: " << ++b << std::endl;
        std::cout << "b++: " << b++ << std::endl;
        std::cout << "b: " << b << std::endl;

        std::cout << "--b: " << --b << std::endl;
        std::cout << "b--: " << b-- << std::endl;
        std::cout << "b: " << b << std::endl;
    }
    {
        Fixed a;
        Fixed const b(Fixed(5.05f) * Fixed(2));
        std::cout << a << std::endl;
        std::cout << ++a << std::endl;
        std::cout << a << std::endl;
        std::cout << a++ << std::endl;
        std::cout << a << std::endl;
        std::cout << b << std::endl;
        std::cout << Fixed::max(a, b) << std::endl;
        std::cout << Fixed::min(a, b) << std::endl;
    }
}
