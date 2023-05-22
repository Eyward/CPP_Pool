
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main(){

    FragTrap o1("ZAK");
    FragTrap o2;
    o2 = o1;

    o1.attack("hello");
    o2.highFivesGuys();
    return (0);
}