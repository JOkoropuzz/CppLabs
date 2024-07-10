#include <iostream>
#include<array>
using namespace std;

class Point
{
private:
    double x, y;

public:
    Point() : x(0), y(0) {}
    Point(double xVal, double yVal) : x(xVal), y(yVal) {}

    int getX() const { return x; }
    int getY() const { return y; }

    void setY(double value) { y = value; }
    void setX(double value) { x = value; }

    void inputPoint()
    {
        double a, b;
        cout << "Введите координаты X и Y вершины через пробел: ";
        cin >> a >> b;
        setX(a);
        setY(b);

    }
};

static double GaussSqare(array<Point, 5> points)
{
    double result = abs(points[0].getX() * points[1].getY() + points[1].getX() * points[2].getY()
        + points[2].getX() * points[3].getY() + points[3].getX() * points[4].getY()
        + points[4].getX() * points[0].getY() - points[0].getY() * points[1].getX()
        - points[1].getY() * points[2].getX() - points[2].getY() * points[3].getX()
        - points[3].getY() * points[4].getX() - points[4].getY() * points[0].getX()) / 2.0;
    return result;
}

int main()
{

    system("chcp 1251");
    cout << "Расчёт площяди пятиугольника по формуле Гаусса" << endl;


    Point p1, p2, p3, p4, p5;
    array<Point, 5> points = { p1, p2, p3, p4, p5 };

    for (int i = 0; i < points.size(); i++)
    {
        points[i].inputPoint();
    }

    cout << "Площадь пятиугольника:" << GaussSqare(points) << endl;
}