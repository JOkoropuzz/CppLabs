#include <iostream>
#include <iterator>
#include <string>
#include <vector>
using namespace std;

template <class T>
void Print(const T& container, const string& delimiter) 
{
    for (auto i = begin(container); i != end(container); i++)
    {
        cout << *i;
        if (next(i) != end(container)) {
            cout << delimiter;
        }
    }
    cout << "\n";
}
int main()
{
    system("chcp 1251");

    std::vector<int> data = { 1, 2, 3 };
    Print(data, ", "); // на экране: 1, 2, 3
}
