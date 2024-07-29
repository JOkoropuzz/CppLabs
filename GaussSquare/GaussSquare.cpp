#include <iostream>
#include <string>
#include <sstream>
#include <array>
using namespace std;

double GaussSqare(array<pair<int, int>, 5> points)
{
    double result = abs(points[0].first * points[1].second + points[1].first * points[2].second
        + points[2].first * points[3].second + points[3].first * points[4].second
        + points[4].first * points[0].second - points[0].second * points[1].first
        - points[1].second * points[2].first - points[2].second * points[3].first
        - points[3].second * points[4].first - points[4].second * points[0].first) / 2.0;
    return result;
}

int main()
{

    system("chcp 1251");

    cout << "Расчёт площяди пятиугольника по формуле Гаусса" << endl;



    array<pair<int, int>, 5> points;

    for (int i = 0; i < points.size(); i++)
    {
        int a, b;
        cout << "Введите координаты X и Y вершины через пробел: ";
        cin >> a >> b;
        points[i].first = a;
        points[i].second = b;
    }

    cout << "Площадь пятиугольника: " << GaussSqare(points) << endl;
}