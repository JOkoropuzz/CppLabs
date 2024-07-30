#include "Triangle.h"
#include <string>
#include <iostream>
#include "ExistExeption.h"

using namespace std;

Triangle::Triangle(double  s1, double  s2, double  s3)
{
	if ((s1 + s2) < s3 || (s1 + s3) < s2 || (s2 + s3) < s1)
	{
		throw ExistExeption("Triangle inicialization", s1, s2, s3);
	}

	Triangle::set_side1(s1);
	Triangle::set_side2(s2);
	Triangle::set_side3(s3);
}

Triangle::Triangle(Dot d1, Dot d2, Dot d3)
{
	int s1, s2, s3;
	s1 = d1.distanceTo(d2);
	s2 = d2.distanceTo(d3);
	s3 = d3.distanceTo(d1);

	if ((s1 + s2) <= s3 || (s1 + s3) <= s2 || (s2 + s3) <= s1)
	{
		throw ExistExeption("Triangle inicialization", s1, s2, s3);
	}

	Triangle::set_side1(s1);
	Triangle::set_side2(s2);
	Triangle::set_side3(s3);
}


void Triangle::set_side1(double  s)
{
	Triangle::side1 = s;
}

double  Triangle::get_side1()
{
	return Triangle::side1;
}

void Triangle::set_side2(double  s)
{
	Triangle::side2 = s;
}

double  Triangle::get_side2()
{
	return Triangle::side2;
}
void Triangle::set_side3(double  s)
{
	Triangle::side3 = s;
}

void Triangle::set_dot3(Dot* d)
{
	Triangle::dot3 = d;
}

void Triangle::set_dot2(Dot* d)
{
	Triangle::dot2 = d;
}

void Triangle::set_dot1(Dot* d)
{
	Triangle::dot1 = d;
}

double  Triangle::get_side3()
{
	return Triangle::side3;
}

Dot Triangle::get_dot3()
{
	return *Triangle::dot3;
}

Dot Triangle::get_dot2()
{
	return *Triangle::dot2;
}

Dot Triangle::get_dot1()
{
	return *Triangle::dot1;
}

double Triangle::Perimetr()
{
	return (double)(side1 + side2 + side3);
}

double Triangle::Square()
{
	double p = Perimetr() / 2.0;
	double result = pow(p * (p - side2) * (p - side1) * (p - side3), 0.5);
	return result;
}