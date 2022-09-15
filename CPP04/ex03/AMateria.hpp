#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include <cmath>
#include "ICharacter.hpp"


using namespace std;

class AMateria
{
    protected:
        std::string _type;
    public:
        AMateria(std::string const & type);
    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target) = 0;
    void    getType() const;
    void    setType(std::string type) const;
};

