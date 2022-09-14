#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include "WrongAnimal.hpp"
#include <iostream>
#include <cmath>

using namespace std;

class   WrongAnimal
{
    public:
        WrongAnimal(void);
        WrongAnimal(std::string type);
        ~WrongAnimal(void);
        std::ostream &operator=(WrongAnimal const &rhs);
        std::string getType();
        std::string setType();
        void    makeSound();

    protected:
        std::string type;
}

std::ostream &operator<<(std::ostream &cout, const Point &instance);

#endif