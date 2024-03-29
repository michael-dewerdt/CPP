#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(100), _energyPoints(50), _attackDamage(20)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap & rhs)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = rhs;
}

ClapTrap &ClapTrap::operator=(ClapTrap const & rhs)
{
    std::cout << "ClapTrap assignation operator called" << std::endl;
    this->_name = rhs.getName();
    this->_hitPoints = rhs.getHitPoints();
    this->_energyPoints = rhs.getEnergyPoints();
    this->_attackDamage = rhs.getAttackDamage();
    return *this;
}

std::string ClapTrap::getName() const {return _name;} 
int ClapTrap::getHitPoints() const {return _hitPoints;} 
int ClapTrap::getAttackDamage() const {return _attackDamage;} 
int ClapTrap::getEnergyPoints() const {return _energyPoints;}

void ClapTrap::attack(const std::string& target)
{
    std::cout << "ClapTrap " << this->_name << "attacks " << target << ": (-" << this->_attackDamage << ")" << std::endl;
    this->_energyPoints--;
}
void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name << "took " << amount << " damage !" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name << "heals himself for " << amount << " hit points !" << std::endl;
}
