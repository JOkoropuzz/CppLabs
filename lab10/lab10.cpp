#include <iostream>
#include <string>
#include <sstream>
#include "Triangle.h"
#include "ExistExeption.h"

using namespace std;

int main()
{
    system("chcp 1251");

    try
    {
        double x1, x2, x3, y1, y2, y3;
        cout << "Введите x и y первой точки через пробел: ";
        cin >> x1 >> y1;
        cout << "Введите x и y второй точки через пробел: ";
        cin >> x2 >> y2;
        cout << "Введите x и y третьей точки через пробел: ";
        cin >> x3 >> y3;
        Dot d1(x1, y1);
        Dot d2(x2, y2);
        Dot d3(x3, y3);
        Triangle t1 = Triangle(d1, d2, d3);

        cout << "Площадь треугольника = " << t1.Square() << endl;
    }
    catch (ExistExeption ex)
    {
        ex.printMessage();
    }

}