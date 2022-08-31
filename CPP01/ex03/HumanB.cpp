#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name)
{

}

HumanB::~HumanB(void)
{

}

void    HumanB::attack(void) const
{
    std::cout << this->name << " attack with his " << this->weapon->getType()<<std::endl;
}

bool    HumanB::setWeapon(Weapon& new_weapon)
{
    if (new_weapon.getType() == "")
	{
		std::cout << "new weapon can't be an empty string" << std::endl;
		return (false);
	}
	this->weapon = &new_weapon;
    return (true);
}
