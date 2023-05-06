#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
    private:
        int _fixed_point;
        static const int _frac_bits = 8;
    public :
        Fixed();
        Fixed(Fixed const & old_obj);
        ~Fixed();
        Fixed& operator=(Fixed const& obj);

        int getRawBits(void) const;
        void setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream& os, Fixed const& fix);

#endif