#include "Fixed.hpp"

Fixed::Fixed(void) : nb(0)
{
	//std::cout << "Default constructor called" << std::endl;
}


Fixed::Fixed(int const nb)
{
	//std::cout << "Int constructor called" << std::endl;
	this->nb = nb << nbstac;
}

Fixed::Fixed(float const nb)
{
	int power = pow(2, this->nbstac);

	//std::cout << "Float constructor called" << std::endl;
	this->nb = roundf(nb * power);
	return;
}

Fixed::Fixed(const Fixed & src)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed(void)
{
	//std::cout << "Destructor called" << std::endl;
}

bool Fixed::operator>(const Fixed &rhs) const
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool Fixed::operator<(const Fixed &rhs) const
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool Fixed::operator>=(const Fixed &rhs) const
{
	return (this->getRawBits() >= rhs.getRawBits());
}

bool Fixed::operator<=(const Fixed &rhs) const
{
	return (this->getRawBits() <= rhs.getRawBits());
}

bool Fixed::operator==(const Fixed &rhs) const
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool Fixed::operator!=(const Fixed &rhs) const
{
	return (this->getRawBits() != rhs.getRawBits());
}

Fixed& Fixed::operator=(const Fixed& other) {
	//std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		nb = other.nb;
	return *this;
}

Fixed&	Fixed::operator+(const Fixed& other)
{
	Fixed *tmp = new Fixed(this->toFloat() + other.toFloat());
	return *tmp;
}

Fixed&	Fixed::operator-(const Fixed& other)
{
	Fixed *tmp = new Fixed(this->toFloat() - other.toFloat());
	return *tmp;
}

Fixed	&Fixed::operator*(const Fixed &other)
{
	Fixed *tmp = new Fixed(this->toFloat() * other.toFloat());
	return *tmp;
}

Fixed	&Fixed::operator/(const Fixed& other)
{
	Fixed *tmp = new Fixed(this->toFloat() / other.toFloat());
	return *tmp;
}

Fixed	&Fixed::operator++(void)
{
	this->nb++;
	return *this;
}

Fixed	&Fixed::operator--(void)
{
	this->nb--;
	return *this;
}

int Fixed::getRawBits() const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return nb;
}

void Fixed::setRawBits(int const value )
{
	//std::cout << "getRawBits member function called" << std::endl;
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


const Fixed	&min(Fixed const &first_nb, Fixed const &second_nb)
{
	tmp* = new Fixed(min(first_nb.toFloat(), second_nb.toFloat()));
	return (tmp);
}

const Fixed	&max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

std::ostream &operator<<(std::ostream &cout, const Fixed &instance)
{
	cout << instance.toFloat();
	return cout;
}