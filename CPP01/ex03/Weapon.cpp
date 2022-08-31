#include "Weapon.hpp"

Weapon::Weapon(std::string type): type(type)
{

}

Weapon::~Weapon(void)
{

}

std::string& Weapon::getType(void)
{
    return(this->type);
}

bool    Weapon::setType(std::string new_type)
{
    if (new_type == "")
	{
		std::cout << "new type can't be empty string" << std::endl;
		return (false);
	}
	this->type = new_type;
    return (true);
}


