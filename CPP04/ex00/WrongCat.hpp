#ifndef WRONGWrongCAT_HPP
#define WRONGWrongCAT_HPP

#include "Animal.hpp"
#include <iostream>
#include <cmath>

using namespace std;

class   WrongCat: public WrongAnimal
{
    public:
        WrongCat(void);
        WrongCat(std::string type);
        ~WrongCat(void);
        std::ostream &operator=(WrongCat const &rhs);
        std::string getType();
        std::string setType();
        void    makeSound();

    protected:
        std::string type;
}

std::ostream &operator<<(std::ostream &cout, const Point &instance);

#endif