#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : _HitPoints(100), _energyPoints(100), _attackDamage(30)
{
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::~FragTrap(void)
{
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap & rhs)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = rhs;
}

FragTrap &FragTrap::operator=(FragTrap const & rhs)
{
    std::cout << "FragTrap assignation operator called" << std::endl;
    this->_name = rhs.getName();
    this->_hitPoints = rhs.getHitPoints();
    this->_energyPoints = rhs.getEnergyPoints();
    this->_attackDamage = rhs.getAttackDamage();
    return *this;
}

void HighFivesGuys(void)
{
    std::cout << "FragTrap " << this->_name << " wants a High Fuys !" << std::endl;
}