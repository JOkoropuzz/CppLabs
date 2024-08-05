#include <iostream>
#include <string>
using namespace std;

template<class T>
T Avg(T mas[], size_t n)
{
    T s = 0;
    for (int i = 0; i < n; i++)
    {
        s += mas[i];
    }
    return s/n;
}



int main()
{
    system("chcp 1251");

    int arr[] = { 9,3,17,6,5,4,31,2,12 };
    double arrd[] = { 2.1, 2.3,1.7,6.6,5.3,2.44,3.1,2.4,1.2 };
    char arrc[] = "Hello, word";
    int k1 = sizeof(arr) / sizeof(arr[0]);
    int k2 = sizeof(arrd) / sizeof(arrd[0]);
    int k3 = sizeof(arrc) / sizeof(arrc[0]) - 1;

    
    cout << Avg(arr, k1) << ";" << endl;
    cout << Avg(arrd, k2) << ";" << endl;
    cout << Avg(arrc, k3) << ";" << endl;
}
