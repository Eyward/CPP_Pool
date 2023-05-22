#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap o1("ZAK");
    ClapTrap o2(o1);
    ClapTrap o3;

    std::cout << std::endl;

    ClapTrap o4("TAK");
    o1.attack("lol");
    o2.attack("o2");
    o4.takeDamage(8);
    std::cout << std::endl;
    for (int i = 0; i < 10; i++)
        o4.beRepaired(10);
    std::cout << std::endl;
    o4.beRepaired(1);
    std::cout << std::endl;
    return (0);
}