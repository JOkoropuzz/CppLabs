#include "DayEndExeption.h"
#include <string>
#include <iostream>

using namespace std;

DayEndExeption::DayEndExeption()
{
	message = "����� ��� ������ ���� ������ 23:59:59!";
}


void DayEndExeption::printMessage() const { cout << message << endl; }
