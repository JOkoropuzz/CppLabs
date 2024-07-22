#include <iostream>
#include <string>
using namespace std;

bool Input(int& a, int& b)
{
	bool minusFlag1 = false;
	bool minusFlag2 = false;
	string val1, val2;

	cout << "Enter first int: ";
	cin >> val1;
	cout << "Enter second int: ";
	cin >> val2;

	if (val1[0] == '-')
	{
		minusFlag1 = true;
		val1.erase(0, 1);
	}

	if (val2[0] == '-')
	{
		minusFlag2 = true;
		val2.erase(0, 1);
	}

	for (int i = 0; i < val1.length(); i++)
	{

		if (!isdigit(val1[i]))
		{
			return false;
		}
	}

	for (int i = 0; i < val2.length(); i++)
	{
		if (!isdigit(val2[i]))
		{
			return false;
		}
	}
	
	a = minusFlag1 ? -stoi(val1) : stoi(val1);
	b = minusFlag2 ? -stoi(val2) : stoi(val2);

	return true;
}

int main()
{
	system("chcp 1251");

	int a, b;
	if (!Input(a,b))
	{
		cerr << "error";
		return 1;
	}
	int s = a + b;
	return s;
}
