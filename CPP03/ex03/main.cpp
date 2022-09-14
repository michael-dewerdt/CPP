#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    Claptrap    first("XxX-Master-of-Archer-xXx");
    Scavtrap    second("Bouftou");
    FragTrap    third("Tofu");
    DiamondTrap fourth("El Diamento");
    first.attack("Bouftou");
    second.takeDamage(first.getAttackDamage());
    second.beRepaired(1);
    second.guardGate();
    third.highFivesGuys();
    third.attack("Tofu");
    first.takeDamage(third.getAttackDamage());
    return (0);
}