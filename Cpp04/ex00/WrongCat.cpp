#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat Default constrcutor called" << std::endl;
    this->_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const& old_obj) : WrongAnimal(old_obj)
{
    std::cout << "WrongCat Copy constructor called" << std::endl;
    *this = old_obj;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat& WrongCat::operator=(WrongCat const& obj)
{
    if (this != &obj){
        this->_type = obj._type;
    }
    std::cout << "WrongCat copy assignement operator called " << std::endl;
    return (*this);
}


void WrongCat::makeSound() const
{
    std::cout << "WrongCat: meeeaow!" << std::endl;
}
