#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class ClapTrap
{
    public:
        ClapTrap(std::string name);
        ~ClapTrap(void);
        ClapTrap(ClapTrap const & rhs);
        ClapTrap &operator=(ClapTrap const & rhs);
        void    attack(const std::string &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        std::string	getName() const;
		int			getHitPoints() const;
		int			getEnergyPoints() const;
		int			getAttackDamage() const;
    private:
        const std::string name;
        int energy_points;
        int attack_damage;
}

std::ostream &operator<<(std::ostream &cout, const Point &instance);