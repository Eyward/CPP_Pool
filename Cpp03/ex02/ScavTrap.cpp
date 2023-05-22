
#include "ScavTrap.hpp"

#include "ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    std::cout << "ScavTrap default Constructor called" << std::endl;
    this->_Hit_points = 100;
    this->_Energy_points = 50;
    this->_Attack_damage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    std::cout << "ScavTrap Constructor called" << std::endl;
    this->_Hit_points = 100;
    this->_Energy_points = 50;
    this->_Attack_damage = 20;
}

ScavTrap::ScavTrap(ScavTrap const& old_obj) : ClapTrap(old_obj)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    this->_name = old_obj._name;
    this->_Hit_points = old_obj._Hit_points;
    this->_Energy_points = old_obj._Energy_points;
    this->_Attack_damage = old_obj._Attack_damage;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(ScavTrap const& obj)
{
    std::cout << "ScavTrap Copy assignment operator called" << std::endl;
    this->_name = obj._name;
    this->_Hit_points = obj._Hit_points;
    this->_Energy_points = obj._Energy_points;
    this->_Attack_damage = obj._Attack_damage;
    return (*this);
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap have entered in Gate Keeper Mode" << std::endl;
}

void    ScavTrap::attack(std::string const& target)
{
    if (_Energy_points == 0)
        std::cout << "ScavTrap " << this->_name << " can't attack No energy points left" << std::endl;
    else if (_Hit_points == 0)
        std::cout << "ScavTrap " << this->_name << " can't attack No Hit points left" << std::endl;
    else
        std::cout << "ScavTrap " << this->_name << " attack" << target << ", causing " << this->_Attack_damage << " points of damage" << std::endl;
}




