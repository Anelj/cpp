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

	bool operator==(const Fixed &rhs) const;

	bool operator!=(const Fixed &rhs) const;

	bool operator<(const Fixed &rhs) const;

	bool operator>(const Fixed &rhs) const;

	bool operator<=(const Fixed &rhs) const;

	bool operator>=(const Fixed &rhs) const;

	Fixed operator+(const Fixed &rhs) const;

	Fixed operator-(const Fixed &rhs) const;

	Fixed operator*(const Fixed &rhs) const;

	Fixed operator/(const Fixed &rhs) const;

	Fixed& operator++();

	Fixed operator++(int);

	Fixed& operator--();

	Fixed operator--(int);

	static Fixed& min(Fixed &f1, Fixed &f2);

	static const Fixed& min(const Fixed &f1, const Fixed &f2);

	static Fixed& max(Fixed &f1, Fixed &f2);

	static const Fixed& max(const Fixed &f1, const Fixed &f2);
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif
