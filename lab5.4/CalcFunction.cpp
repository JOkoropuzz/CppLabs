#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string Calculator(string request)
{
    string argc[4];
    int Num = 0;
    char prev = ' ';
    int a, b, result;

    for (int i = 0; i < request.size(); i++) 
    {
        if (request[i] != ' ' && prev == ' ') Num++;
        prev = request[i];
    }

    if (Num != 4) return "Не корректный ввод!";
    
    int i = 0;
    stringstream ssin(request);
    while (ssin.good() && i < 4) {
        ssin >> argc[i];
        ++i;
    }

    if (argc[0] != "nameProg") return "Не известное имя функции!";

    try
    {
        a = stoi(argc[2]);
        b = stoi(argc[3]);
    }
    catch (const invalid_argument& e)
    {
        return "Вводимые значения должны быть целочисленными!";
    }

    if (argc[1] == "-a")
    {
        result = a + b;
        return to_string(result);
    }
    else if (argc[1] == "-m")
    {
        result = a * b;
        return to_string(result);
    }
    else
    {
        return "Оператора " + argc[1] + " не существует!";
    }


}

int main()
{
    system("chcp 1251");

    cout << Calculator("nameProg -a 4 5") << endl;

    cout << Calculator("nameProg -m 4 5") << endl;

    cout << Calculator("nameProgg -a 4 5") << endl;

    cout << Calculator("nameProg -a 4 5 5") << endl;

    cout << Calculator("nameProg -a f 5") << endl;

    cout << Calculator("nameProg -f 4 5") << endl;


    return 0;
}
