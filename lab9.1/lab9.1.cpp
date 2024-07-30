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
        int s1, s2, s3;
        cout << "Введите 3 стороны треугольника через пробел: ";
        cin >> s1 >> s2 >> s3;
        Triangle t1 = Triangle(s1, s2, s3);

        cout << "Площадь треугольника = " << t1.Square() << endl;
    }
    catch (ExistExeption ex)
    {
        ex.printMessage();
    }
   
}
