#include "Triangle.h"
#include <string>
#include <iostream>
#include "ExistExeption.h"

using namespace std;

Triangle::Triangle(int s1, int s2, int s3)
{
	if ((s1 + s2) < s3 || (s1 + s3) < s2 || (s2 + s3) < s1)
	{
		throw ExistExeption("Triangle inicialization", s1, s2, s3);
	}
	
	Triangle::set_side1(s1);
	Triangle::set_side2(s2);
	Triangle::set_side3(s3);
}


void Triangle::set_side1(int s)
{
	Triangle::side1 = s;
}

int Triangle::get_side1()
{
	return Triangle::side1;
}

void Triangle::set_side2(int s)
{
	Triangle::side2 = s;
}

int Triangle::get_side2()
{
	return Triangle::side2;
}
void Triangle::set_side3(int s)
{
	Triangle::side3 = s;
}

int Triangle::get_side3()
{
	return Triangle::side3;
}

double Triangle::Square()
{
	double p = (double)(side1 + side2 + side3) / 2.0;
	double result = pow(p*(p-side2)*(p- side1)*(p- side3), 0.5);
	return result;
}

