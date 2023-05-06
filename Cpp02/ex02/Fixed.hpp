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

        bool operator>(Fixed const& fp) const;
        bool operator<(Fixed const& fp) const;
        bool operator>=(Fixed const& fp) const;
        bool operator<=(Fixed const& fp) const;
        bool operator==(Fixed const& fp) const;
        bool operator!=(Fixed const& fp) const;
        
        Fixed operator+(Fixed const& fp) const;
        Fixed operator-(Fixed const& fp) const;
        Fixed operator*(Fixed const& fp) const;
        Fixed operator/(Fixed const& fp) const;

        Fixed &operator++();
        Fixed operator++(int);
        Fixed &operator--();
        Fixed operator--(int); 

        static Fixed const& min(Fixed const& fp1, Fixed const& fp2);
        static Fixed const& max(Fixed const& fp1, Fixed const& fp2);
        static Fixed& min(Fixed& fp1, Fixed& fp2);
        static Fixed& max(Fixed& fp1, Fixed& fp2);
        
};

std::ostream& operator<<(std::ostream& os, Fixed const& fix);

#endif