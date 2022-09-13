#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    Claptrap    first("XxX-Master-of-Archer-xXx");
    Scavtrap    leboss("BOSS");

    first.attack("Bouftou");
    leboss.takeDamage(1);
    leboss.beRepaired(1);
    leboss.guardGate();
    return (0);
}