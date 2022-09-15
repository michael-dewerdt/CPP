#include "Cure.hpp"    

Cure(void){std::cout << "Cure constructor called." << std::endl;}
Cure(std::string const & type) : _type(type) {}
~Cure(void) {std::cout << "Cure destructor called." << std::endl;}

Cure &Cure::operator=(Cure const &rhs)
{
    if (*this->_type != rhs._type)
        *this->type = rhs._type;
    return (*this);
}

Cure& Cure::operator=(const Cure &Cure) {
	*this->_type = Cure.getType();
	return *this;
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals" << target.getName() << "’s wounds *" << std::endl;
}

const std::string &Cure::getType() const {
	return _type;
}