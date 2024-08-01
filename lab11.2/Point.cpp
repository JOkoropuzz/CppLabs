#include "Point.h"
#include <math.h>
#include <ostream>
Point::Point()
{
	x = 0; y = 0;
}

Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;
}

double Point::distanceTo(Point point)
{
	return sqrt(pow(point.x - x, 2) + pow(point.y - y, 2));
}

double Point::distanceToZero() const
{
	return sqrt(pow(0 - x, 2) + pow(0 - y, 2));
}

bool Point::operator> (const Point& p2) const
{
	double dist1 = distanceToZero();
	double dist2 = p2.distanceToZero();

	if (dist1 > dist2) return true;
	else return false;
}

bool Point::operator< (const Point& p2) const
{
	double dist1 = distanceToZero();
	double dist2 = p2.distanceToZero();

	if (dist1 > dist2) return false;
	else return true;
}

std::ostream& operator<< (std::ostream& out, const Point& point)
{
	out << "(" << point.x << ", " << point.y << ")";
	return out;
}
