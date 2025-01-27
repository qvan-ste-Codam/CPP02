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
