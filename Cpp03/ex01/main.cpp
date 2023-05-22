
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main(void)
{
    ScavTrap objscav("scav");
    std::cout << std::endl;

    ClapTrap objclav("clap");
    objscav.attack("shello");
    objscav.guardGate();
    objscav.beRepaired(10);
    std::cout << std::endl;

    objscav.attack("scav");

    objclav.takeDamage(8);
    objclav.beRepaired(10);
    objclav.attack("clap");
    return (0);
}