#include <iostream>
#include <string>
using namespace std;

double CubRoot(double a)
{
	return pow(a, 1.0 / 3);
}

double CubRoot(double a, bool flag)
{
	double xi = 0;
	
	for (int i = 0; i < 20; i++)
	{

		if (xi == 0)
		{
			xi = ((a / (a * a)) + 2 * a) / 3;
		}
		else
		{
			double xii = ((a / (xi * xi)) + 2 * xi) / 3;
			
			if (abs(xi - xii) < 0.001)
			{
				return xi;
			}
			xi = ((a / (xi * xi)) + 2 * xi) / 3;
		}
		
	}
	
	return CubRoot(xi);
	
}

int main()
{
	system("chcp 1251");

	double a;
	cout << "Вычисление кубического корня."<< endl;
	cout << "Введите число положительное число: ";
	cin >> a;

	cout << "Результат метода с \"pow\": " << CubRoot(a) << endl;
	cout << "Результат метода с итерационной формулой: " << CubRoot(a, true) << endl;
}
