#include "Fixed.hpp"

#include <cmath>
#include <iostream>

Fixed::Fixed() : value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& rhs) : value(rhs.value) {
    std::cout << "Copy constructor called" << std::endl;
}

Fixed::Fixed(const int intValue) : value(intValue << nFractBits) {
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floatValue)
    : value(std::roundf(floatValue * (1 << nFractBits))) {
    std::cout << "Float constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& rhs) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs) {
        this->value = rhs.value;
    };
    return *this;
}

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->value = raw;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->value;
}

int Fixed::toInt(void) const { return this->value >> nFractBits; }

float Fixed::toFloat(void) const {
    return static_cast<float>(this->value) / (1 << nFractBits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}
