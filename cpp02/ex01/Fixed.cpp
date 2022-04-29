#include "Fixed.hpp"

Fixed::Fixed() : rawBits(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(Fixed const &f)
{
	std::cout << "Copy constructor called\n";
	*this = f;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=(const Fixed &rhs)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &rhs)
		this->rawBits = rhs.getRawBits();
	return *this;
}

Fixed::Fixed(int const i)
{
	std::cout << "Int constructor called\n";
	rawBits = i << FR_BITS;
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called\n";
	rawBits = (int) roundf(f * ( 1 << FR_BITS));
}

float Fixed::toFloat( void ) const
{
	return (float) rawBits / (1 << FR_BITS);
}

int Fixed::toInt( void ) const
{
	return rawBits >> FR_BITS;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return os;
}

int Fixed::getRawBits() const
{
	//std::cout << "getRawBits member function called\n";
	return rawBits;
}

void Fixed::setRawBits(int const rawBits)
{
	Fixed::rawBits = rawBits;
}

const int Fixed::FR_BITS = 8;
