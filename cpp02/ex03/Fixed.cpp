#include "Fixed.hpp"

Fixed::Fixed() : rawBits(0)
{

}

Fixed::Fixed(Fixed const &f)
{
	*this = f;
}


Fixed::~Fixed()
{

}

Fixed& Fixed::operator=(const Fixed &rhs)
{
	if (this != &rhs)
		this->rawBits = rhs.getRawBits();
	return *this;
}

Fixed::Fixed(int const i)
{
	rawBits = i << FR_BITS;
}

Fixed::Fixed(float const f)
{
	rawBits = (int) roundf(f * ( 1 << FR_BITS));
}

bool Fixed::operator==(const Fixed &rhs) const
{
	return rawBits == rhs.rawBits;
}

bool Fixed::operator!=(const Fixed &rhs) const
{
	return !(rhs == *this);
}

bool Fixed::operator<(const Fixed &rhs) const
{
	return rawBits < rhs.rawBits;
}

bool Fixed::operator>(const Fixed &rhs) const
{
	return rhs < *this;
}

bool Fixed::operator<=(const Fixed &rhs) const
{
	return !(rhs < *this);
}

bool Fixed::operator>=(const Fixed &rhs) const
{
	return !(*this < rhs);
}

Fixed Fixed::operator+(const Fixed &rhs) const
{
	Fixed fixed;

	fixed.setRawBits(rawBits + rhs.getRawBits());
	return fixed;
}

Fixed Fixed::operator-(const Fixed &rhs) const
{
	Fixed fixed;

	fixed.setRawBits(rawBits - rhs.getRawBits());
	return fixed;
}

Fixed Fixed::operator/(const Fixed &rhs) const
{
	if (rhs.getRawBits() == 0)
		return Fixed();
	return Fixed(toFloat() / rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed &rhs) const
{
	return Fixed(toFloat() * rhs.toFloat());
}

Fixed& Fixed::operator++()
{
	rawBits++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed fixed = *this;

	rawBits++;
	return fixed;
}

Fixed& Fixed::operator--()
{
	rawBits--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed fixed = *this;

	rawBits--;
	return fixed;
}

Fixed& Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1.getRawBits() > f2.getRawBits())
		return f2;
	return f1;
}

const Fixed& Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if (f1.getRawBits() > f2.getRawBits())
		return f2;
	return f1;
}

Fixed& Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1.getRawBits() > f2.getRawBits())
		return f1;
	return f2;
}

const Fixed& Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if (f1.getRawBits() > f2.getRawBits())
		return f1;
	return f2;
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
	return rawBits;
}

void Fixed::setRawBits(int const rawBits)
{
	Fixed::rawBits = rawBits;
}

const int Fixed::FR_BITS = 8;
