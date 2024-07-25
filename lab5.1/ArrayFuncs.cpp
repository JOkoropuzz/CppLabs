#include <iostream>
#include <string>
using namespace std;

int Sum(int* mas, size_t n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += mas[i];
    }
    return s;
}

double Avg(int* mas, size_t n)
{
    return (double)Sum(mas, n) / n;
}

int OnlyMinus(int* mas, size_t n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i] < 0)
        {
            s += mas[i];
        }
    }

    return s;
}

int OnlyPlus(int* mas, size_t n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i] > 0)
        {
            s += mas[i];
        }
    }

    return s;
}

int OnlyEven(int* mas, size_t n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i] % 2 == 0)
        {
            s += mas[i];
        }
    }

    return s;
}

int OnlyOdd(int* mas, size_t n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        if (mas[i] % 2 != 0)
        {
            s += mas[i];
        }
    }

    return s;
}

void Sort(int mas[], size_t n)
{
    int min = 0; 
    int buf = 0;
    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
            min = (mas[j] < mas[min]) ? j : min;
        if (i != min)
        {
            buf = mas[i];
            mas[i] = mas[min];
            mas[min] = buf;
        }
    }
}

int main()
{
    system("chcp 1251");

    const int n = 10;
    int mas[n];
    int a[n] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };

    for (int i = 0; i < n; i++)
    {
        cout << "mas[" << i << "]=";
        cin >> mas[i];
    }
    
    cout << "Сумма = " << Sum(mas, n)<< endl;
    
    cout << "Среднее = " << Avg(mas, n) << endl;

    cout << "Сумма отрицательных = " << OnlyMinus(mas, n) << endl;

    cout << "Сумма положительных = " << OnlyPlus(mas, n) << endl;

    cout << "Сумма четных = " << OnlyEven(mas, n) << endl;

    cout << "Сумма нечетных = " << OnlyOdd(mas, n) << endl;

    cout << "Инвертированный массив:" << OnlyOdd(mas, n) << endl;
    
    Sort(a, n);

    for (int i : a)
        cout << i << '\t';

    return 0;
}

