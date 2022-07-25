#include "Zombie.hpp"

void	randomChump(std::string name )
{
	Zombie zombito = newZombie(name);
	zombito.announce();
}