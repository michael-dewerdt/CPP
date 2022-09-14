#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <iostream>
#include <cmath>

using namespace std;

class   Dog: public Animal
{
    public:
        Dog(void);
        Dog(std::string type);
        ~Dog(void);
        std::ostream &operator=(Dog const &rhs);
        std::string getType();
        std::string setType();
        void    makeSound();

    protected:
        std::string type;
}

std::ostream &operator<<(std::ostream &cout, const Point &instance);

#endif