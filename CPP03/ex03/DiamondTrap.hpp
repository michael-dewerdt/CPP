#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class DiamondTrap : public ScavTrap, public FragTrap
{
    public:
        DiamondTrap(std::string name);
        ~DiamondTrap(void);
        DiamondTrap(DiamondTrap const & rhs);
        DiamondTrap &operator=(DiamondTrap const & rhs);
        void guardGate();

    private:
        const std::string _name;
        int _energyPoints;
        int _attackDamage;
        int _hitPoints;
}

std::ostream &operator<<(std::ostream &cout, const Point &instance);