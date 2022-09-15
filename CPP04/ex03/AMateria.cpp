#include "AMateria.hpp"    

AMateria(void){std::cout << "AMateria constructor called." << std::endl;}
AMateria(std::string const & type) : _type(type) {}
~AMateria(void) {std::cout << "AMateria destructor called." << std::endl;}

AMateria &AMateria::operator=(AMateria const &rhs)
{
    if (*this->_type != rhs._type)
        *this->_type = rhs._type;
    return (*this);
}

AMateria& AMateria::operator=(const AMateria &aMateria) {
	_type = aMateria.getType();
	return *this;
}

void AMateria::use(ICharacter &target) {
	std::cout << "* shoots an " << _type << " materia at " << target.getName << " *" << std::endl;
}

const std::string &AMateria::getType() const {
	return _type;
}

const	std::string	&AMateria::getType(){return *this->_type;}
void	&AMateria::setType(std::string type){*this->_type = type;}