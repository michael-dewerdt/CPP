#include "Brain.hpp"    

Brain::Brain(void)
{
    std::cout << "Brain constructor called." << std::endl;
}

Brain::~Brain(void)
{
    std::cout << "Brain destructor called." << std::endl;
}

Brain &Brain::operator=(Brain const &rhs)
{
    std::cout << "Brain Copy operator called." << std::endl;
    this->rhs::setType(rhs::getType());
    return (*this);
}