#pragma once
#include <iostream>
#include <string>
using namespace std;

class DayEndExeption
{
public:

	DayEndExeption();
	void printMessage() const;

private:

	string message;
};
