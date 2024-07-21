#include <iostream>
using namespace std;


int Hit(int xHit, int yHit, int xCenter, int yCenter, int radius, int score)
{
    bool result = (pow((xHit - xCenter), 2) + pow((yHit - yCenter), 2)) <= pow(radius, 2);
    if (result)
    {
        return score;
    }
    else
    {
        return 0;
    }

}

int main()
{
    system("chcp 1251");
    srand(time(0));

    int randomShotCoef = 2;
    int randomCenterRange = 10;
    int magazin = 5;

    int xCenter = -randomCenterRange + rand() % (randomCenterRange + randomCenterRange + 1);
    int yCenter = -randomCenterRange + rand() % (randomCenterRange + randomCenterRange + 1);

    int userScore = 0;
    int userCountShots = 0;

    cout << "Сгенерированна мишень в диапазоне от " << randomCenterRange << " до " << -randomCenterRange << " по координатам X и Y" << endl;
    cout << "Выстрел - ввод пары целых чисел через пробел." << endl;
    cout << "Стрельба происходит до тех пор, пока вы не наберёте 50 очков!" << endl;

    while (userScore < 50)
    {
        int xHit, yHit;
        userCountShots += 1;
        cout << "Сделайте выстрел!" << endl;
        cin >> xHit >> yHit;

        xHit += -randomShotCoef + rand() % (randomShotCoef + randomShotCoef + 1);
        yHit += -randomShotCoef + rand() % (randomShotCoef + randomShotCoef + 1);

        if (Hit(xHit, yHit, xCenter, yCenter, 2, 10) != 0)
        {
            cout << "Попадание: " << Hit(xHit, yHit, xCenter, yCenter, 2, 10) << " очков!" << endl;
            userScore += Hit(xHit, yHit, xCenter, yCenter, 2, 10);
        }
        else if (Hit(xHit, yHit, xCenter, yCenter, 4, 7) != 0)
        {
            cout << "Попадание: " << Hit(xHit, yHit, xCenter, yCenter, 4, 7) << " очков!" << endl;
            userScore += Hit(xHit, yHit, xCenter, yCenter, 4, 7);
        }
        else if (Hit(xHit, yHit, xCenter, yCenter, 8, 5) != 0)
        {
            cout << "Попадание: " << Hit(xHit, yHit, xCenter, yCenter, 8, 5) << " очков!" << endl;
            userScore += Hit(xHit, yHit, xCenter, yCenter, 8, 5);
        }
        else
        {
            cout << "Промах!" << endl;
        }
    }

    cout << "Количество выстрелов: " << userCountShots << endl;
    if (userCountShots <= 7)
    {
        cout << "Вы снайпер!" << endl;
    }
    else if (userCountShots <= 10)
    {
        cout << "Вы хороший стрелок!" << endl;
    }
    else
    {
        cout << "Вы новичок." << endl;
    }


}