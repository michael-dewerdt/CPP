#include "Cat.hpp"    

Cat::Cat(void)
{
    std::cout << "Cat constructor called." << std::endl;
    *this->type = "Cat";
}
Cat::Cat(std::string type) : type(type) {}
Cat::~Cat(void) {std::cout << "Cat destructor called." << std::endl;}

Cat &Cat::operator=(Cat const &rhs)
{
    std::cout << "Cat Copy operator called." << std::endl;
    this->rhs::setType(rhs::getType());
    return (*this);
}

void    Cat::makeSound(){std::cout << this->type << " : MIAOU !" << std::endl;}