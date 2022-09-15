#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <cmath>

using namespace std;

class   AAnimal
{
    public:
        Animal(void);
        Animal(std::string type);
        virtual ~Animal(void);
        std::ostream &operator=(Animal const &rhs);
        std::string getType();
        std::string setType();
        virtual void    makeSound() = 0;

    protected:
        std::string type;
};

std::ostream &operator<<(std::ostream &cout, const Point &instance);

#endif