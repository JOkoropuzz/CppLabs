#pragma once
#include <iostream>
#include <string>
using namespace std;

class ExistExeption
{
	public:
		
		ExistExeption(string, int, int, int);
		void printMessage() const;

	private:

		string message;
		int iValue1, iValue2, iValue3;
};

