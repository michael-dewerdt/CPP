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
        bool operator>(Fixed const & rhs) const;
		bool operator<(Fixed const & rhs) const;
		bool operator>=(Fixed const & rhs) const;
		bool operator<=(Fixed const & rhs) const;
		bool operator==(Fixed const & rhs) const;
		bool operator!=(Fixed const & rhs) const;
		Fixed &operator+(Fixed const & rhs);
		Fixed &operator-(Fixed const & rhs);
		Fixed &operator*(Fixed const & rhs);
		Fixed &operator/(Fixed const & rhs);
		Fixed &operator=(Fixed const & rhs);
		Fixed &operator++();
		Fixed &operator--();

		int	toInt(void) const;
		float toFloat(void) const;
		int getRawBits(void) const;
		void setRawBits(int const value);
		static Fixed min(int &first_nb, int &second_nb);
		static Fixed &min(int const &first_nb, int const &second_nb);
		static const Fixed &max(const Fixed &first_nb, const Fixed &second_nb);
		static const Fixed max(int &first_nb, int &second_nb);

	private:
		int	nb;
		static const int nbstac = 8;
};

std::ostream &operator<<(std::ostream &cout, const Fixed &instance);

#endif