#ifndef ANIMAL_HPP
#define ANIMAP_HPP

#include "Animal.hpp"
#include <iostream>
#include <cmath>

using namespace std;

class   Animal
{
    public:
        Animal(void);
        Animal(std::string type);
        ~Animal(void);
        std::ostream &operator=(Animal const &rhs);
        std::string getType();
        std::string setType();
        void    makeSound();

    protected:
        std::string type;
}

std::ostream &operator<<(std::ostream &cout, const Point &instance);

#endif