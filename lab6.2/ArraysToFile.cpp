#include <iostream>
#include <string>
#include <fstream>
using namespace std;

string ArrayToString(int mas[], size_t n)
{
    string result;

    for (int i = 0; i < n; i++)
    {
        result += to_string(mas[i]) + " ";
    }

    return "{ " + result + "}";
}

void Sort(int mas[], size_t n)
{
    ofstream out("test", ios::out | ios::binary);
    if (!out) {
        cout << "Файл открыть невозможно\n";
        cout << "Результат не сохранён!\n";
    }

    out << "До сортировки: " << ArrayToString(mas, n) << endl;

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

    out << "После сортировки: " << ArrayToString(mas, n) << endl;

    out.close();
}

int main()
{
    system("chcp 1251");

    const int n = 10;
    int a[n] = { 1, 25, 6, 32, 43, 5, 96, 23, 4, 55 };

    Sort(a, n);
    
    return 0;
}
