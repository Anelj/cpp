#include "Point.hpp"
#include "Fixed.hpp"

bool bsp(const Point& a, const Point& b, const Point& c, const Point& point)
{
	Fixed f1 = (a.getX() - point.getX()) * (b.getY() - a.getY()) -
			(b.getX() - a.getX()) * (a.getY() - point.getY());
	Fixed f2 = (b.getX() - point.getX()) * (c.getY() - b.getY()) -
			(c.getX() - b.getX()) * (b.getY() - point.getY());
	Fixed f3 = (c.getX() - point.getX()) * (a.getY() - c.getY()) -
			(a.getX() - c.getX()) * (c.getY() - point.getY());
	if ((f1 > Fixed() && f2 > Fixed() && f3 > Fixed()) || (f1 < Fixed() && f2 < Fixed() && f3 < Fixed()))
		return true;
	return false;
}

/*Fixed area(const Fixed& x1, const Fixed& y1, const Fixed& x2, const Fixed&
y2, const Fixed& x3, const Fixed& y3)
{
	Fixed f = ((x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/Fixed(2.0f));
	//std::cout << x1 << std::endl;
	if (f < 0)
		f = f * Fixed(-1);
	return f;
}

int bsp(const Point& a, const Point& b, const Point& c, const Point& point)
{
	std::cout << a.getX() << std::endl;
	std::cout << b.getX() << std::endl;
	std::cout << c.getX() << std::endl;
	std::cout << point.getX() << std::endl;
	Fixed abc = area(a.getX(), a.getY(), b.getX(), b.getY(), c.getX(),
	c.getY());
	std::cout << abc << std::endl;
	Fixed pbc = area(point.getX(), point.getY(), b.getX(), b.getY(), c.getX(),
					 c.getY());
	std::cout << pbc << std::endl;
	Fixed pac = area(a.getX(), a.getY(), point.getX(), point.getY(), c.getX(),
					c.getY());
	std::cout << pac << std::endl;
	Fixed pab = area(a.getX(), a.getY(), b.getX(), b.getY(), point.getX(), point.getY());
	std::cout << pab << std::endl;
	return (abc == pab + pbc + pac);
}*/
