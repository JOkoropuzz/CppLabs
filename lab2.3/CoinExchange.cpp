#include <iostream>
using namespace std;

int main()
{
    system("chcp 1251");

    cout << "Введите сумму сдачи: ";

    int change;
    cin >> change;

    int countTenCoin;
    int countFiveCoin;
    int countTwoCoin;
    int countOneCoin;

    countTenCoin = change / 10;
    change -= countTenCoin * 10;
    countFiveCoin = change / 5;
    change -= countFiveCoin * 5;
    countTwoCoin = change / 2;
    change -= countTwoCoin * 2;
    countOneCoin = change;

    cout << "Выдать сдачу: ";
    if (countTenCoin != 0)
    {
        cout << countTenCoin << " монет номиналом 10р; ";
    }
    if (countFiveCoin != 0)
    {
        cout << countFiveCoin << " монет номиналом 5р; ";
    }
    if (countTwoCoin != 0)
    {
        cout << countTwoCoin << " монет номиналом 2р; ";
    }
    if (countOneCoin != 0)
    {
        cout << countOneCoin << " монет номиналом 1р; ";
    }
    


}
