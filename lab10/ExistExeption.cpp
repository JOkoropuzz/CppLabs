#include "ExistExeption.h"
#include <string>
#include <iostream>

using namespace std;

ExistExeption::ExistExeption(string ori, int s1, int s2, int s3)
{
	iValue1 = s1;
	iValue2 = s2;
	iValue3 = s3;
	message = "Треугольника не существует!";
}


void ExistExeption::printMessage() const { cout << message << endl; }