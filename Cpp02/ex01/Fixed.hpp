#ifndef FIXED_HPP
# define FIXED_HPP

#include <cmath>

class Fixed
{
    private:
        int _fixed_point;
        static const int _frac_bits = 8;
    public :
        Fixed();
        Fixed(const int nbr);
        Fixed(const float nbr);
        Fixed(Fixed const & old_obj);
        ~Fixed();
        Fixed& operator=(Fixed const& obj);

        float toFloat( void ) const;
        int toInt( void ) const;
        int getRawBits(void) const;
        void setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream& os, Fixed const& fix);

#endif