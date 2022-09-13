#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

using namespace std;

class Fixed
{
    public:
        Fixed(); // Constructeur par défaut
        Fixed (const Fixed & rhs); // Constructeur de recopie
        ~Fixed (); // Destructeur éventuellement virtuel
        Fixed &operator=(const Fixed & rhs); // Operator d'affectation
		int getRawBits(void) const;
		void setRawBits(int const value);

	private:
		float	nb;
		static const int nbstac = 8;
};

#endif