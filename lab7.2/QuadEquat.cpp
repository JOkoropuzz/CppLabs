#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct QuadEquat
{
    double x1;
    double x2;
};

QuadEquat Roots(int a, int b, int c)
{
    QuadEquat q;
    double D = (b * b) - (4 * a * c);
    if (D < 0)
    {
        q.x1 = NULL;
        q.x2 = NULL;
        return q;
    }
    else if (D == 0)
    {
        q.x1 = -b / (2 * a);
        q.x2 = q.x1;
        return q;
    }
    else
    {
        q.x1 = (-b + pow(D, 1 / 2)) / (2 * a);
        q.x2 = (-b - pow(D, 1 / 2)) / (2 * a);
        return q;
    }
}

void QuadEquatShow(QuadEquat q)
{
    if (q.x1 == NULL) cout << "Корней нет" << endl;
    else
    {
        cout << "Первый корень x1 = " << q.x1 << endl;
        cout << "Второй корень x2 = " << q.x1 << endl;
    }
    
    
}

int main()
{
    system("chcp 1251");

    QuadEquat q = Roots(-2, 3, -3);
    QuadEquatShow(q);
    q = Roots(1, 3, -3);
    QuadEquatShow(q);

    

}
