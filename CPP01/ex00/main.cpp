
#include "Zombie.hpp"
#include <iostream>
#include <string.h>

int main()
{
    Zombie zombie1;
    zombie1.name = "The first one";
    zombie1->announce();
    Zombie *zombie2 = newZombie("The second one");
    zombie2->announce();
    Zombie *zombie3 = randomChump("The chosen one");
    return (0);
}