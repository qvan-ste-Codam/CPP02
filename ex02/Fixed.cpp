#include "Fixed.hpp"

#include <iostream>

Fixed::Fixed() : value(0) {}

Fixed::Fixed(const Fixed& rhs) : value(rhs.value) {}

Fixed::Fixed(const int intValue) : value(intValue << nFractBits) {}

Fixed::Fixed(const float floatValue)
    : value(static_cast<int>(roundf(floatValue * (1 << nFractBits)))) {}

Fixed::~Fixed() {}

Fixed& Fixed::operator=(const Fixed& rhs) {
    if (this != &rhs) {
        this->value = rhs.value;
    };
    return *this;
}

Fixed Fixed::operator+(const Fixed& rhs) const {
    return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed& rhs) const {
    return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed& rhs) const {
    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed& rhs) const {
    return Fixed(this->toFloat() / rhs.toFloat());
}

bool Fixed::operator>(const Fixed& rhs) const {
    return this->value < rhs.value;
}

bool Fixed::operator<(const Fixed& rhs) const {
    return this->value < rhs.value;
}

bool Fixed::operator>=(const Fixed& rhs) const {
    return this->value >= rhs.value;
}

bool Fixed::operator<=(const Fixed& rhs) const {
    return this->value <= rhs.value;
}

bool Fixed::operator==(const Fixed& rhs) const {
    return this->value == rhs.value;
}

bool Fixed::operator!=(const Fixed& rhs) const {
    return this->value != rhs.value;
}

Fixed& Fixed::operator++() {
    this->value += 1;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp = *this;
    ++(*this);
    return temp;
}

Fixed& Fixed::operator--() {
    this->value -= 1;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp = *this;
    --(*this);
    return temp;
}

void Fixed::setRawBits(int const raw) { this->value = raw; }

int Fixed::getRawBits(void) const { return this->value; }

int Fixed::toInt(void) const { return (this->value >> nFractBits); }

float Fixed::toFloat(void) const {
    return static_cast<float>(this->value) / (1 << nFractBits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}
