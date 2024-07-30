#pragma once 
#include <iostream>
#include <string>
using namespace std;



class Triangle
{
public:
	
	
	Triangle(int, int, int);

	void set_side1(int);
	int get_side1();


	void set_side2(int);
	int get_side2();

	void set_side3(int);
	int get_side3();

	double Square();
	
	

private:
	int side1;
	int side2;
	int side3;
};
