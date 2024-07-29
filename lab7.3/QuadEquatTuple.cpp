#include <iostream>
#include <windows.h>
#include <string>
#include <tuple>
#include <vector>

using namespace std;

using Tuple = tuple<double, double, bool>;

Tuple Roots(int a, int b, int c)
{
    double x1, x2;
    bool flag = true;
    double D = (b * b) - (4 * a * c);
    if (D < 0)
    {
        x1 = NULL;
        x2 = NULL;
        flag = false;
    }
    else if (D == 0)
    {
       x1 = -b / (2 * a);
       x2 = x1;
    }
    else
    {
        x1 = (-b + pow(D, 1 / 2)) / (2 * a);
        x2 = (-b - pow(D, 1 / 2)) / (2 * a);
    }
    return make_tuple(x1, x2, flag);
}

void QuadEquatShow(tuple<double, double, bool> q)
{
    if (get<2>(q) == false) cout << "Корней нет" << endl;
    else
    {
        cout << "Первый корень x1 = " << get<0>(q) << endl;
        cout << "Второй корень x2 = " << get<1>(q) << endl;
    }


}

int main()
{
    system("chcp 1251");

    auto t = Roots(-2, 3, -3);
    QuadEquatShow(t);
    t = Roots(1, 3, -3);
    QuadEquatShow(t);
}
