#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default constructor called" << std::endl;
    brain = new Brain();
    this->_type = "Dog";
}

Dog::Dog(Dog const& old_obj) : Animal(old_obj)
{
    std::cout << "Dog Copy constructor called " << std::endl;
    this->brain = NULL;
    this->_type = old_obj._type;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor" << std::endl;
    delete brain;
}

Dog& Dog::operator=(Dog const& obj)
{
     if (this != &obj)
    {
        this->_type = obj._type;
        if (brain != NULL)
            delete brain;
        brain = new Brain(*obj.brain);
    }
    std::cout << "Dog copy assignement operator called" << std::endl;
    return (*this);
}

void    Dog::makeSound() const
{
    std::cout << "Dog: woof woof" << std::endl;
}
