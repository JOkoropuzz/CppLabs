#include "DayEndExeption.h"
#include <string>
#include <iostream>

using namespace std;

DayEndExeption::DayEndExeption()
{
	message = "Время дня должно быть меньше 23:59:59!";
}


void DayEndExeption::printMessage() const { cout << message << endl; }
