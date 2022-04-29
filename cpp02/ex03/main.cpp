#include "Point.hpp"

bool bsp(const Point& a, const Point& b, const Point& c, const Point& point);

int main()
{
	Point a;
	Point b = Point(10.0f, 30.0f);
	Point c = Point(20.0f, 0.0f);
	Point point = Point(10.0f, 15.0f);
	std::cout << "expected true: " << (bsp(a, b, c, point) ? "true" : "false")
	<< std::endl;
	Point point1(30.0f, 15.0f);
	std::cout << "expected false: " << (bsp(a, b, c, point1) ? "true" : "false")
	<< std::endl;
	Point point2(10.0f, 0.0f);
	std::cout << "expected false: " << (bsp(a, b, c, point2) ? "true" : "false")
	<< std::endl;
	return 0;
}
