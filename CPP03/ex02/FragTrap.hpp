#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class FragTrap : public ClapTrap
{
    public:
        FragTrap(std::string name);
        ~FragTrap(void);
        FragTrap(FragTrap const & rhs);
        FragTrap &operator=(FragTrap const & rhs);
        void HighFivesGuys();

    private:
        const std::string name;
        int energy_points;
        int attack_damage;
}

std::ostream &operator<<(std::ostream &cout, const Point &instance);