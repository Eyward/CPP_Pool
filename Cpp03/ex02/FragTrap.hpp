#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        FragTrap(FragTrap const& old_obj);
        ~FragTrap();
        FragTrap& operator=(FragTrap const& obj);

        void highFivesGuys(void);
};

# endif