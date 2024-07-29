#include <iostream>
#include <string>
#include <sstream>
#include "Time.h"
using namespace std;

int main()
{
    system("chcp 1251");

    Time t1 = Time(20, 54, 52);
    Time t2 = Time(24242);
    Time t3 = t1.Add(t2);

    t3.TimeShow();
}
