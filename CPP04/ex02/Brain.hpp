#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Brain.hpp"
#include <iostream>
#include <cmath>

using namespace std;

class   Brain
{
    public:
        Brain(void);
        Brain(std::string type);
        ~Brain(void);
        std::ostream &operator=(Brain const &rhs);
        std::string getType();
        std::string setType();
        void    makeSound();

    protected:
        std::string type;

    private:
        std::string Brain[100];
};

std::ostream &operator<<(std::ostream &cout, const Point &instance);

#endif