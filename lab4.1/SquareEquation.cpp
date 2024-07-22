#include <iostream>
#include <string>
using namespace std;

int Myroot(double a, double b, double c, double& x1, double& x2)
{
    double D = (b * b) - (4 * a * c);
    if (D < 0)
    {
        return -1;
    }
    else if (D == 0)
    {
        x1 = -b / (2 * a);
        x2 = x1;
        return 0;
    }
    else
    {
        x1 = ( - b + pow(D, 1 / 2)) / (2 * a);
        x2 = (-b - pow(D, 1 / 2)) / (2 * a);
        return 1;
    }
}

int main()
{
    system("chcp 1251");
    double a = 2.5;
    double b = 10;
    double c = 10;
    double x1, x2;
    
    switch (Myroot(2.5, 10, 10, x1, x2))
    {
        case -1:
            cout << "Корней уравнения нет";
        case 0:
            cout << "Корень уравнения один x1 = x2 = "<< x1;
        case 1:
            cout << "Корни уравнения x1 = " << x1 << ", x2 = " << x2;
        default:
            break;
    }
}
