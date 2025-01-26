#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
   public:
    Fixed();
    Fixed(Fixed &rhs);
    Fixed &operator=(const Fixed &rhs);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);

   private:
    int value;
    static const int nFractBits = 8;
};

#endif
