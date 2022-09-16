#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class ScavTrap : public ClapTrap
{
    public:
		ScavTrap(void);
        ScavTrap(std::string name);
        ~ScavTrap(void);
        ScavTrap(ScavTrap const & rhs);
        ScavTrap &operator=(ScavTrap const & rhs);
        void guardGate();

    private:
        const std::string _name;
        int _energyPoints;
        int _attackDamage;
		int _hitPoints;
};

std::ostream &operator<<(std::ostream &cout, const ScavTrap &instance);

#endif