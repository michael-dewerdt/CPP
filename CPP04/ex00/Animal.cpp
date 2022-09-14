#include "Animal.hpp"    

Animal(void){std::cout << "Animal constructor called." << std::endl;}
Animal(std::string type) : type(type) {}
~Animal(void) {std::cout << "Animal destructor called." << std::endl;}

Animal &Animal::operator=(Animal const &rhs)
{
    if (*this != rhs)
        *this = rhs;
    return (*this);
}

std::string Animal::getType() {return (*this->type);}
std::string Animal::setType(std::string type) {*this->type = type;}

void    makeSound()
{
    std::cout << "ANIMAL SOUUUUUUUND" << std::endl;
}