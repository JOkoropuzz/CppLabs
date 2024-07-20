#include <iostream>
using namespace std;

class Target
{
private:
    int x, y, radius, score;

public:
    Target(int r, int s)
    {
        x = 0;
        y = 0;
        radius = r;
        score = s;
    }
    Target(int xVal, int yVal, int r, int s)
    {
        x = xVal;
        y = yVal;
        radius = r;
        score = s;
    }

    int getCenterX() const { return x; }
    int getCenterY() const { return y; }
    int getRadius() const { return radius; }
    int getScore() const { return score; }

    void setCenterY(int value) { y = value; }
    void setCenetX(int value) { x = value; }
    void setRadius(int value) { radius = value; }
    void setScore(int value) { score = value; }

    int Hit(int xHit, int yHit)
    {
        bool result = (pow((xHit - x), 2) + pow((yHit - y), 2)) <= pow(radius, 2);
        if (result)
        {
            return score;
        }
        else
        {
            return 0;
        }

    }
};


int main()
{
    system("chcp 1251");
    srand(time(0));

    int randomCoef = 1;
    int randomCenterRange = 10;
    int magazin = 5;

    

    int xCenter = -randomCenterRange + rand() % (randomCenterRange + randomCenterRange + 1);
    int yCenter = -randomCenterRange + rand() % (randomCenterRange + randomCenterRange + 1);

    Target t1{xCenter, yCenter, 2, 10};
    Target t2{xCenter, yCenter, 4, 7};
    Target t3{xCenter, yCenter, 8, 5};

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

        if (t1.Hit(xHit, yHit) != 0)
        {
            cout << "Попадание: " << t1.Hit(xHit, yHit) << " очков!" << endl;
            userScore += t1.Hit(xHit, yHit);
        }
        else if (t2.Hit(xHit, yHit) != 0)
        {
            cout << "Попадание: " << t2.Hit(xHit, yHit) << " очков!" << endl;
            userScore += t2.Hit(xHit, yHit);
        }
        else if (t3.Hit(xHit, yHit) != 0)
        {
            cout << "Попадание: " << t3.Hit(xHit, yHit) << " очков!" << endl;
            userScore += t3.Hit(xHit, yHit);
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


