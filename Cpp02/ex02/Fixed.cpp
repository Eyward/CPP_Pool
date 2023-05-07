#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed() : _fixed_point(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nbr)
{
    std::cout << "Int constructor called" << std::endl;
    this->_fixed_point = nbr << this->_frac_bits;
}

Fixed::Fixed(const float nbr)
{
    std::cout << "Float constructor called" << std::endl;
    this->_fixed_point = roundf(nbr * (1 << this->_frac_bits));
}


Fixed::Fixed(Fixed const & old_obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = old_obj;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(Fixed const& obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->_fixed_point = obj.getRawBits();
    return (*this);
}

float Fixed::toFloat( void ) const
{
    return ((float)((float)this->_fixed_point / (float)(1 << _frac_bits)));
}

int Fixed::toInt( void ) const
{
    return ((int)this->_fixed_point >> this->_frac_bits);
}


int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return _fixed_point;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl; // for debuggin
    this->_fixed_point = raw;
}

bool Fixed::operator>(Fixed const& fp) const
{
    if (this->_fixed_point > fp.getRawBits())
        return (1);
    return (0);
}

bool Fixed::operator<(Fixed const& fp) const
{
    if (this->_fixed_point < fp.getRawBits())
        return (1);
    return (0);
}

bool Fixed::operator>=(Fixed const& fp) const
{
    if (this->_fixed_point >= fp.getRawBits())
        return (1);
    return (false);
}

bool Fixed::operator<=(Fixed const& fp) const
{
    if (this->_fixed_point <= fp.getRawBits())
        return (1);
    return (0);
}

bool Fixed::operator==(Fixed const& fp) const
{
    if (this->_fixed_point == fp.getRawBits())
        return (1);
    return (0);
}

bool Fixed::operator!=(Fixed const& fp) const
{
    if (this->_fixed_point != fp.getRawBits())
        return (1);
    return (0);
}

Fixed Fixed::operator+(Fixed const& fp) const
{
    return (this->toFloat() + fp.toFloat());
}

Fixed Fixed::operator-(Fixed const& fp) const
{
    return (this->toFloat() - fp.toFloat());
}

Fixed Fixed::operator*(Fixed const& fp) const
{
    return (this->toFloat() * fp.toFloat());
}

Fixed Fixed::operator/(Fixed const& fp) const
{
    return (this->toFloat() / fp.toFloat());
}

Fixed& Fixed::operator++()
{
    this->_fixed_point += 1;
    return (*this); 
}

Fixed Fixed::operator++(int)
{
    Fixed temp(*this);
    this->_fixed_point += 1;
    return (temp);
}

Fixed& Fixed::operator--()
{
    this->_fixed_point -= 1;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed temp(*this);
    this->_fixed_point -= 1;
    return (temp);
}

Fixed const& Fixed::min(Fixed const& fp1, Fixed const& fp2)
{
    if (fp1.getRawBits() < fp2.getRawBits())
        return (fp1);
    return (fp2);
}

Fixed const& Fixed::max(Fixed const& fp1, Fixed const& fp2)
{
    if (fp1.getRawBits() > fp2.getRawBits())
        return (fp1);
    return (fp2);
}

Fixed& Fixed::min(Fixed& fp1, Fixed& fp2)
{
    if (fp1.getRawBits() < fp2.getRawBits())
        return (fp1);
    return (fp2);
}

Fixed& Fixed::max(Fixed& fp1, Fixed& fp2)
{
    if (fp1.getRawBits() > fp2.getRawBits())
        return (fp1);
    return (fp2);
}


std::ostream& operator<<(std::ostream& os, Fixed const& fix)
{
    os << fix.toFloat();
    return os;
}

