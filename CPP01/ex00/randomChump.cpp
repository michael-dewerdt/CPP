#include "Zombie.hpp"

void    randomChump(std::string name)
{
    Zombie chosen = Zombie(name);
    chosen.announce();
}