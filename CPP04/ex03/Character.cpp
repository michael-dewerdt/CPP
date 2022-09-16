#include "ICharacter.hpp"    

Character(void){std::cout << "Character constructor called." << std::endl;}
Character(std::string const & name) : _name(name) {}
virtual ~Character(void)
{
	for (int i = 0; i < this->_inventory_size; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	std::cout << "Character destructor called." << std::endl;
}

Character &Character::operator=(Character const &rhs)
{
	this->_name = rhs.getName();
	this->_AMetaria_equipped = 0;
	for (int i = 0; i < Character::__inventory_size; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
		this->_inventory[i] = rhs._inventory[i];
		if (rhs._inventory[i])
			this->_materia_equipped++;
	}
	std::cout << "Assignement operator for Character called" << std::endl;
	return *this;
}

Character& Character::operator=(const Character &Character) {
	_type = Character.getType();
	return *this;
}

virtual std::string const& Character::getName() const{return *this->_name};
virtual void Character::equip(AMateria* m)
{
    int i = 0;
    while (this->_inventory[i] != NULL)
        i++;    
    this->_inventory[i] = m;
}

virtual void Character::unequip(int idx)
{
    this->_inventory[idx] = NULL;
}

virtual void Character::use(int idx, ICharacter& target)
{
	if (this->_inventory[idx])
		(this->_inventory[idx]).use(target);
	
}