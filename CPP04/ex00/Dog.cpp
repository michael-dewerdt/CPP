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
    std::cout << "Dog Copy operator called." << std::endl;
    this->rhs::setType(rhs::getType());
    return (*this);
}

void    Dog::makeSound(){std::cout << this->type << " : WOUF !" << std::endl;}