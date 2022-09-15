#include "Ice.hpp"    

Ice(void){std::cout << "Ice constructor called." << std::endl;}
Ice(std::string const & type) : _type(type) {}
~Ice(void) {std::cout << "Ice destructor called." << std::endl;}

Ice &Ice::operator=(Ice const &rhs)
{
    if (*this->_type != rhs._type)
        *this->type = rhs._type;
    return (*this);
}

Ice& Ice::operator=(const Ice &Ice) {
	_type = Ice.getType();
	return *this;
}

void Cure::use(ICharacter &target) {
	std::cout << "* shoots an " << _type << " bolt at " << target.getName() << " *" << std::endl;
}

const std::string &Ice::getType() const {
	return _type;
}