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

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called\n";
	return rawBits;
}

void Fixed::setRawBits(int const rawBits)
{
	Fixed::rawBits = rawBits;
}

int FR_BITS = 8;
