#include <iostream>
#include <string>
using namespace std;

int Search(int* mas, int a, int size) {

    int index;

    for (int i = 0; i < size; i++) {
        if (mas[i] == a) {
            index = i;

            if (index == 0) {
                break;
            }
            else {
                swap(mas[i], mas[i - 1]);
            }
        }
    }

    return index;
}

int main()
{
	 system("chcp 1251");

     const int n = 10;
     int mas[n] = { 2, 45, 54, 3, 6, 8, 10, 5, 4, 20 };
     int find = 20;

     for (int i = 0; i < 10; i++) {
         cout << "Элемент массива " << find << " имеет индекс: " << Search(mas, 20, n) << ".\n";
     }

     return 0;
}
