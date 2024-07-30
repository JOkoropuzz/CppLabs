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
        Time t1 = Time(20, 54, 52);
        Time t2 = Time(24242);
        Time t3 = t1.Add(t2);
        t3.TimeShow();
    }
    catch (DayEndExeption ex)
    {
        ex.printMessage();
    }

    
}