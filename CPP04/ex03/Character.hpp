
#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter
{

public:

	Character( const std::string &name );
	Character( const Character &src );
	~Character( void );

	Character	&operator=( const Character &other );

	virtual std::string const	&getName() const ;
	virtual void				equip(AMateria* m);
	virtual void				unequip(int idx);
	virtual void				use(int idx, ICharacter& target);

private:

	Character( void );

    public:
        const static int    _inventory_size = 4;

    private:
        std::string _name;
        AMateria* _inventory[_inventory_size];
        int	    _materia_equipped;

};

#endif