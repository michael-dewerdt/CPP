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
        ScavTrap(std::string name);
        ~ScavTrap(void);
        ScavTrap(ScavTrap const & rhs);
        ScavTrap &operator=(ScavTrap const & rhs);
        void guardGate();

    private:
        const std::string name;
        int energy_points;
        int attack_damage;
}

std::ostream &operator<<(std::ostream &cout, const Point &instance);