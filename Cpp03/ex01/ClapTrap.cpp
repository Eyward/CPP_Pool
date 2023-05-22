#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name(""), _Hit_points(10), _Energy_points(10), _Attack_damage(0)
{
    std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _Hit_points(10), _Energy_points(10), _Attack_damage(0)
{
    std::cout << "ClapTrap Constructor called" << std::endl;
    this->_name = name;
}

ClapTrap::ClapTrap(ClapTrap const& obj) : _name(obj._name), _Hit_points(obj._Hit_points), _Energy_points(obj._Energy_points), _Attack_damage(obj._Attack_damage)
{
    std::cout << "ClapTrap Copy Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called " << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const& obj)
{
    std::cout << "ClapTrap Copy assignment operator called" << std::endl;
    this->_name = obj._name;
    this->_Hit_points = obj._Hit_points;
    this->_Energy_points = obj._Energy_points;
    this->_Attack_damage = obj._Attack_damage;

    return (*this);
}

void    ClapTrap::attack(std::string const& target)
{
    if (_Energy_points == 0)
        std::cout << "ClapTrap " << this->_name << " can't attack No energy points left" << std::endl;
    else if (_Hit_points == 0)
        std::cout << "ClapTrap " << this->_name << " can't attack No Hit points left" << std::endl;
    else
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ",causing "<<_Attack_damage <<" points of damage!" <<std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (_Energy_points == 0)
        std::cout << "ClapTrap " << this->_name << " can't take damage No energy point left" << std::endl;
    else if (_Hit_points == 0)
        std::cout << "ClapTrap " << this->_name << " can't take damage No Hit point left" << std::endl;
    else
        std::cout << "ClapTrap " << this->_name << " took " << amount << " damage." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_Energy_points > 0)
    {
        std::cout << "ClapTrap " << this->_name << " repaired " << amount << " damage and lost 1 EP" << std::endl;
        _Energy_points--;
        _Hit_points += amount;
    }
    else
        std::cout << "ClapTrap " << this->_name << " can't be repaired no EP left" << std::endl;
}