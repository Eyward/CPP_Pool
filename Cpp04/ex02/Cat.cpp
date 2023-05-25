# include "Cat.hpp"
# include "Brain.hpp"

Cat::Cat()
{
    std::cout << "Cat Default constructor called" << std::endl;
    this->_type = "Cat";
    brain = new Brain;
}

Cat::Cat(Cat const& old_obj) : Animal(old_obj)
{
    std::cout << "Cat Copy constructor called " << std::endl;
    brain = NULL;
    this->_type = old_obj._type;
}

Cat::~Cat()
{
    std::cout << "Cat Destrcutor called " << std::endl;
    delete brain;

}

Cat& Cat::operator=(Cat const& obj)
{
    if (this != &obj)
    {
        this->_type = obj._type;
        if (brain != NULL)
            delete this->brain;
        this->brain = new Brain(*obj.brain);
    }
    std::cout << "Cat copy assignement operator called" << std::endl;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Cat: meeeaow!" << std::endl;
}