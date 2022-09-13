#include "Zombie.hpp"

Zombie::Zombie( std::string name ): name(name)
{
}

Zombie::~Zombie(void)
{
    std::cout<<this->name + " is really dead this time."<<std::endl;
}

void    Zombie::announce(void)
{
    std::cout<<this->name + ": BraiiiiiiizzzZ..."<<std::endl;
}

