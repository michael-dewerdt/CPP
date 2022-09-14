#include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap & rhs)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = rhs;
}

ScavTrap &ScavTrap::operator=(ScavTrap const & rhs)
{
    std::cout << "ScavTrap assignation operator called" << std::endl;
    this->_name = rhs.getName();
    this->_hitPoints = rhs.getHitPoints();
    this->_energyPoints = rhs.getEnergyPoints();
    this->_attackDamage = rhs.getAttackDamage();
    return *this;
}

void guardGate(void)
{
    std::cout << "ScavTrap " << this->_name << "entered the GUARD DATE MODE !!!" << std::endl;
}
