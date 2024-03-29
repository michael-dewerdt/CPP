#include "Animal.hpp"    

Animal(void){std::cout << "Animal constructor called." << std::endl;}
Animal(std::string type) : type(type) {}
Animal(Animal const rhs){ *this = rhs;}
~Animal(void) {std::cout << "Animal destructor called." << std::endl;}

Animal &Animal::operator=(Animal const &rhs)
{
    std::cout << "Animal Copy operator called." << std::endl;
    this->rhs::setType(rhs::getType());
    return (*this);
}

std::string Animal::getType() {return (*this->type);}
std::string Animal::setType(std::string type) {*this->type = type;}

void    makeSound()
{
    std::cout << "ANIMAL SOUUUUUUUND" << std::endl;
}