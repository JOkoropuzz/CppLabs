#pragma once 
#include <iostream>
#include <string>
#include "Dot.h"
using namespace std;



class Triangle
{
public:
	//Убрав конструктор, отношения треугольника и точки - композиция.
	Triangle(double s1, double  s2, double  s3);

	Triangle(Dot d1, Dot d2, Dot d3);

	void set_side1(double);
	double  get_side1();


	void set_side2(double);
	double  get_side2();

	void set_side3(double);
	double  get_side3();

	void set_dot1(Dot*);
	Dot get_dot1();

	void set_dot2(Dot*);
	Dot get_dot2();

	void set_dot3(Dot*);
	Dot get_dot3();

	double Square();

	double Perimetr();



private:

	Dot* dot1;
	Dot* dot2;
	Dot* dot3;

	double side1;
	double side2;
	double side3;
};
