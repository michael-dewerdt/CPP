#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>
#include <cmath>

using namespace std;

class   Cat: public Animal
{
    public:
        Cat(void);
        Cat(std::string type);
        ~Cat(void);
        std::ostream &operator=(Cat const &rhs);
        std::string getType();
        std::string setType();
        void    makeSound();

    protected:
        std::string type;
}

std::ostream &operator<<(std::ostream &cout, const Point &instance);

#endif