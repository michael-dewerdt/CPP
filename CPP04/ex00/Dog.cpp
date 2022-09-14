#include "Animal.hpp"    

Dog::Dog(void)
{
    std::cout << "Dog constructor called." << std::endl;
    *this->type = "Dog";
}
Dog::Dog(std::string type) : type(type) {}
Dog::~Dog(void) {std::cout << "Dog destructor called." << std::endl;}

Dog &Dog::operator=(Dog const &rhs)
{
    if (*this != rhs)
        *this = rhs;
    return (*this);
}

void    Dog::makeSound(){std::cout << this->type << " : WOUF !" << std::endl;}