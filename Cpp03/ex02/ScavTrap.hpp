#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <string>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const& old_obj);
        ~ScavTrap();
        ScavTrap& operator=(ScavTrap const& obj);

        void attack(std::string const& target);
        void guardGate();
};


# endif