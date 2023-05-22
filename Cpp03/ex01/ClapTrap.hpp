#ifndef CLAPTRAP_HPP

# define CLAPTRAP_HPP

# include <iostream>
# include <string>


class ClapTrap
{
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const& old_obj);
        ~ClapTrap();
        ClapTrap& operator=(ClapTrap const& obj);

        void attack(std::string const& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

    protected:
        std::string _name;
        int         _Hit_points;
        int         _Energy_points;
        int         _Attack_damage;
};

# endif
