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
        virtual void    makeSound();

    protected:
        std::string type;

    private:
        std::string ideas[100];
};

std::ostream &operator<<(std::ostream &cout, const Point &instance);

#endif