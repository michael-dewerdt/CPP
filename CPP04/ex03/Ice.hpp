#include "Ice.hpp"

class Ice : public AMateria
{
    protected:
        std::string _type;
    public:
        Ice(std::string const & type);
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};