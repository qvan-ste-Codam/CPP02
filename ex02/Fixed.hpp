#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed {
   public:
    Fixed();
    Fixed(const Fixed &rhs);
    Fixed(const int intValue);
    Fixed(const float floatValue);
    ~Fixed();
    Fixed &operator=(const Fixed &rhs);
    Fixed operator+(const Fixed &rhs) const;
    Fixed operator-(const Fixed &rhs) const;
    Fixed operator*(const Fixed &rhs) const;
    Fixed operator/(const Fixed &rhs) const;
    bool operator>(const Fixed &rhs) const;
    bool operator<(const Fixed &rhs) const;
    bool operator>=(const Fixed &rhs) const;
    bool operator<=(const Fixed &rhs) const;
    bool operator==(const Fixed &rhs) const;
    bool operator!=(const Fixed &rhs) const;
    Fixed &operator++();
    Fixed operator++(int);
    Fixed &operator--();
    Fixed operator--(int);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;

   private:
    int value;
    static const int nFractBits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
#endif
