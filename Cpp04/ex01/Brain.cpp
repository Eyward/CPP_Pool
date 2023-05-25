#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default constructor called" << std::endl;
    for (int i = 0 ; i < 100 ; i++)
        ideas[i] = "idea";
}

Brain::Brain(Brain const& old_obj)
{
    std::cout << "Brain Copy constructor called" << std::endl;
    for (int i = 0; i < 100 ; i++)
        this->ideas[i] = old_obj.ideas[i];
}

Brain& Brain::operator=(Brain const& obj)
{
    std::cout << "Brain Copy assignment operator called" << std::endl;
    for (int i = 0; i < 100 ; i++)
        this->ideas[i] = obj.ideas[i];
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain Destrcutor called" << std::endl;
}
