#include <iostream>
#include <iomanip>
#include "Zombie.hpp"

using namespace std;

int main()
{
    Zombie zombie1("The first one");
    zombie1.announce();
    Zombie *zombie2 = newZombie("The second one");
    zombie2->announce();
    delete zombie2;
    randomChump("The chosen one");
    return (0);
}