#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default constructor called" << std::endl;
    this->_type = "Dog";
}

Dog::Dog(Dog const& old_obj) : Animal(old_obj)
{
    std::cout << "Dog Copy constructor called " << std::endl;
    *this = old_obj;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor" << std::endl;
}

Dog& Dog::operator=(Dog const& obj)
{
    if (this != &obj)
        this->_type = obj._type;
    std::cout << "Dog copy assignement operator called" << std::endl;
    return (*this);
}

void    Dog::makeSound() const
{
    std::cout << "Dog: woof woof" << std::endl;
}
