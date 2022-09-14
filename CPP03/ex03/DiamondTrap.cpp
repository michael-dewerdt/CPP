#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	cout<<"DiamondTrap Default constructor called"<<endl;

	this->name = "EmptyName";
	this->setEP(ScavTrap::getHitPoints());
	this->setHP(FragTrap::getEnergyPoints());
	this->setAD(FragTrap::getAttackDamage());
	this->setName(name.append("_clap_name"));
}

DiamondTrap::DiamondTrap(string name)
{
	cout<<"DiamondTrap constructor called"<<endl;
	this->name = name;
	this->setName(name.append("_clap_name"));
	this->setEnergyPoints(ScavTrap::getHitPoints());
	this->setHitPoints(FragTrap::getEnergyPoints());
	this->setAttackDamage(FragTrap::getAttackDamage());
}

DiamondTrap::~DiamondTrap()
{
	cout<<"DiamondTrap Destructor Called"<<endl;
}

void	DiamondTrap::attack(const string &target)
{
		ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	cout<<"Diamond Name is : "<<this->name << " ClapTrap name is : " << this->getName() << endl;
}