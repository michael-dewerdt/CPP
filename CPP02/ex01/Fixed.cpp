#include "Fixed.hpp"

Fixed::Fixed(int const nb)
{
	std::cout << "Int constructor called" << std::endl;
	this->nb = nb << nbstac;
}

Fixed::Fixed(float const nb)
{
	int power = pow(2, this->nbstac);

	std::cout << "Float constructor called" << std::endl;
	this->nb = roundf(nb * power);
	return;
}

Fixed::Fixed(void) : nb(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		nb = other.nb;
	return *this;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return nb;
}

void Fixed::setRawBits(int const value )
{
	std::cout << "getRawBits member function called" << std::endl;
	this->nb = value;
}

float	Fixed::toFloat(void) const
{
	return (this->nb / (float)(1 << nbstac));
}

int		Fixed::toInt(void) const
{
	return (this->nb >> this->nbstac);
}

std::ostream &operator<<(std::ostream &cout, const Fixed &instance)
{
	cout << instance.toFloat();
	return cout;
}