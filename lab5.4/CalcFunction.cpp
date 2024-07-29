#include <iostream>
#include <string>
#include <sstream>
using namespace std;


int main(int argc, char* argv[])
{
    system("chcp 1251");


    int Num = 0;
    char prev = ' ';
    int a, b, result;

    if (argc != 5)
    {
        cout << "Не корректный ввод.Количество аргументов должно быть равно 4.!";
        return -1;
    }
        

    int i = 0;
    stringstream ssin(argc);
    while (ssin.good() && i < 5) {
        ssin >> argv[i];
        ++i;
    }

    

    if (strncmp(argv[1], "nameProg", 9) != 0)
    {
        cout << "Не известное имя функции!";
        return -1;
    }

    try
    {
        a = stoi(argv[3]);
        b = stoi(argv[4]);
    }
    catch (const invalid_argument& e)
    {
        cout << "Вводимые значения должны быть целочисленными!";
        return -1; 
    }

    if (strncmp(argv[2], "-a", 3) == 0)
    {
        result = a + b;
        cout << result;
        return result;
    }
    else if (strncmp(argv[2], "-m", 3) == 0)
    {
        result = a * b;
        cout << result;
        return result;
    }
    else
    {
        cout << "Оператора не существует!";
        return -1;
    }

    return 0;
}
