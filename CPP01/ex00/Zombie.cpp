#include "Zombie.hpp"

Zombie::Zombie(void)
{
    std:cout << this->name + ":" + "BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie::~Zombie(void)
{
    std:cout << this->name + " is really dead." << std::endl;
}