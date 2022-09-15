#include "Cure.hpp"

class Cure : public AMateria
{
    protected:
        std::string _type;
    public:
        Cure(std::string const & type);
        std::string const & getType() const; //Returns the materia type
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};