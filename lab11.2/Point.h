#pragma once
#include <ostream>
class Point
{
private:

	double x;
	double y;


public:

	bool operator> (const Point&) const;
	bool operator< (const Point&) const;

	Point();
	Point(double x, double y);
	double distanceTo(Point point);
	double distanceToZero() const; 
	friend std::ostream & operator<< (std::ostream & out, const Point & point);
};
