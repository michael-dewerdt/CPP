#include "WrongAnimal.hpp"    

WrongCat::WrongCat(void)
{
    std::cout << "WrongCat constructor called." << std::endl;
    *this->type = "WrongCat";
}
WrongCat::WrongCat(std::string type) : type(type) {}
WrongCat::~WrongCat(void) {std::cout << "WrongCat destructor called." << std::endl;}

WrongCat &WrongCat::operator=(WrongCat const &rhs)
{
    if (*this != rhs)
        *this = rhs;
    return (*this);
}

void    WrongCat::makeSound(){std::cout << this->type << " : MIAOU !" << std::endl;}