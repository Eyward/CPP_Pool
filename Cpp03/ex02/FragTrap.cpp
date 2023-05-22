
# include "FragTrap.hpp"
# include <iostream>
# include <string>

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    std::cout << "FragTrap constructor called" << std::endl;
    this->_name = name;
    this->_Hit_points = 100;
    this->_Energy_points = 100;
    this->_Attack_damage = 30;
}

FragTrap::FragTrap(FragTrap const& old_obj) : ClapTrap(old_obj)
{
    std::cout << "FragTrap copy constructor called "<< std::endl;
    this->_name = old_obj._name;
    this->_Hit_points = old_obj._Hit_points;
    this->_Attack_damage = old_obj._Attack_damage;
    this->_Energy_points = old_obj._Energy_points;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called " << std::endl;
}

FragTrap& FragTrap::operator=(FragTrap const& obj)
{
    std::cout << "FragTrap Copy Assignement operator called " << std::endl;
    this->_name = obj._name;
    this->_Hit_points = obj._Hit_points;
    this->_Attack_damage = obj._Attack_damage;
    this->_Energy_points = obj._Energy_points;
    return(*this);
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "This is Highfive from FragTrap" << std::endl;
}