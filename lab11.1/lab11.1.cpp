#include <iostream>
#include <string>
#include <sstream>
#include "Time.h"
#include "DayEndExeption.h"
using namespace std;

int main()
{
    system("chcp 1251");
    try
    {
        Time t1 = Time(10, 54, 52);
        Time t2 = Time(5, 50, 2);
        
        Time t3 = t1 + t2;
        t3.TimeShow();

        t3 = t1 - t2;
        t3.TimeShow();
        
        if (t2 < t1) cout << "True\n";
        else cout << "False\n";

        t3 = t3 + 3;

        t3.TimeShow();
    }
    catch (DayEndExeption ex)
    {
        ex.printMessage();
    }


}