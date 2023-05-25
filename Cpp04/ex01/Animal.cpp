# include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
    std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
    std::cout << "Animal Constructor called" << std::endl;
}

Animal::Animal(Animal const& old_obj)
{
    this->_type = old_obj._type;
    std::cout << "Animal Copy Constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}

Animal& Animal::operator=(Animal const& obj)
{
    if (this != &obj)
        this->_type = obj._type;
    std::cout << "Animal Copy assignment operator called " << std::endl;
    return (*this);
}

void    Animal::makeSound() const
{
    std::cout << "Loud Animal Sound" << std::endl;
}

std::string Animal::getType() const
{
    return (_type);
}
