#ifndef POINT_H
# define POINT_H

# include "Fixed.hpp"

class Point
{
	const Fixed x;
	const Fixed y;
public:
	Point();

	Point(const float x1, const float y1);

	Point(Point const &p);

	Point &operator=(const Point &rhs);

	~Point();

	const Fixed &getX() const;

	const Fixed &getY() const;
};

#endif
