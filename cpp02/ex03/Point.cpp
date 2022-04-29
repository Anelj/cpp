#include "Point.hpp"

Point::Point() : x(), y()
{}

Point::Point(const float x1, const float y1) : x(x1), y(y1)
{}


Point::Point(const Point &p) : x(p.getX()), y(p.getY())
{

}

Point &Point::operator=(const Point &rhs)
{
	(void) rhs;
	return *this;
}


Point::~Point()
{

}

const Fixed &Point::getX() const
{
	return x;
}

const Fixed &Point::getY() const
{
	return y;
}
