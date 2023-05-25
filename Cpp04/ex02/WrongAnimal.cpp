#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal Constructor called" << std::endl;
    this->_type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const& old_obj)
{
    std::cout << "WrongAnimal Copy constructor called " << std::endl;
    this->_type = old_obj._type;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destrcutor called " << std::endl;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const& obj)
{
    if (this != &obj)
        this->_type = obj._type;
    std::cout << "WrongAnimal copy assignement operator called " << std::endl;
    return (*this);
}

void    WrongAnimal::makeSound() const
{
    std::cout << "Loud WrongAnimal Sound" << std::endl;
}

std::string    WrongAnimal::getType() const
{
    return (_type);
}

