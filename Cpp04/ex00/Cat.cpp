# include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Default constructor called" << std::endl;
    this->_type = "Cat";
}

Cat::Cat(Cat const& old_obj) : Animal(old_obj)
{
    std::cout << "Cat Copy constructor called " << std::endl;
    *this = old_obj;
}

Cat::~Cat()
{
    std::cout << "Cat Destrcutor called " << std::endl;
}

Cat& Cat::operator=(Cat const& obj)
{
    if (this != &obj)
        this->_type = obj._type;
    std::cout << "Cat copy assignement operator called" << std::endl;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Cat: meeeaow!" << std::endl;
}