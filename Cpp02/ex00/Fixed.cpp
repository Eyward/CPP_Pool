#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed() : _fixed_point(0)
{
    std::cout << "Default constructor called" << std::endl;
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

std::ostream& operator<<(std::ostream& os, Fixed const& fix)
{
    os << fix.getRawBits();
    return os;
}

