#include "WrongAnimal.hpp"    

Animal(void){std::cout << "WrongAnimal constructor called." << std::endl;}
WrongAnimal(std::string type) : type(type) {}
~WrongAnimal(void) {std::cout << "WrongAnimal destructor called." << std::endl;}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
    if (*this != rhs)
        *this = rhs;
    return (*this);
}

std::string WrongAnimal::getType() {return (*this->type);}
std::string WrongAnimal::setType(std::string type) {*this->type = type;}

void    makeSound()
{
    std::cout << "Wrong ANIMAL SOUUUUUUUND" << std::endl;
}