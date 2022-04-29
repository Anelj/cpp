#ifndef FIXED_H
#define FIXED_H


#include <iostream>

class Fixed
{
	int rawBits;
	static const int FR_BITS;

public:
	Fixed();

	Fixed(Fixed const &f);

	virtual ~Fixed();

	Fixed& operator=(const Fixed &rhs);

	int getRawBits() const;

	void setRawBits(int const rawBits);

};


#endif
