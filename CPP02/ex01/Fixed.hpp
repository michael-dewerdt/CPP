#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Fixed
{
    public:
		Fixed(void);
        Fixed(int const nb);
		Fixed(float const nb); // Constructeur par défaut
        Fixed (Fixed const & rhs); // Constructeur de recopie
        ~Fixed (); // Destructeur éventuellement virtuel
        Fixed &operator=(Fixed const & rhs); // Operator d'affectation

		int	toInt(void) const;
		float toFloat(void) const;
		int getRawBits(void) const;
		void setRawBits(int const value);

	private:
		int	nb;
		static const int nbstac = 8;
};

std::ostream &operator<<(std::ostream &cout, const Fixed &instance);

#endif