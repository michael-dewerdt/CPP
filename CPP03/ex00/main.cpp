#include "ClapTrap.hpp"

int main(void)
{
    Claptrap    first("XxX-Master-of-Archer-xXx");
    Claptrap    second("Bouftou");

    first.attack("Bouftou");
    second.takeDamage(1);
    second.beRepaired(1);
    return (0);
}