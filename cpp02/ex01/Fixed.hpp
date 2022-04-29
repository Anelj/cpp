#ifndef FIXED_H
# define FIXED_H


# include <iostream>
# include <cmath>

class Fixed
{
	int rawBits;
	static const int FR_BITS;

public:
	Fixed();

	Fixed(Fixed const &f);

	Fixed(int const i);

	Fixed(float const f);

	~Fixed();

	float toFloat( void ) const;

	int toInt( void ) const;

	Fixed& operator=(const Fixed &rhs);

	int getRawBits() const;

	void setRawBits(int const rawBits);

};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif
