#include <iostream>
#include <vector>
using namespace std;

vector<bool> SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.


    vector<bool> prime(n + 1, true);


    for (int p = 2; p * p <= n; p++) {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true) {
            // Update all multiples of p greater than or
            // equal to the square of it numbers which are
            // multiple of p and are less than p^2 are
            // already been marked.
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }

    return prime;
}

bool IsPrime(int n)
{
    bool result = false;
    if (n > 1)
    {
        result = true;
        for (int i = 2; i <= sqrt(n); i++)
        {
            // If n is divisible by any number between 
            // 2 and n/2, it is not prime 
            if (n % i == 0)
            {
                result = false;
                break;
            }
        }
    }
    return result;
}

bool IsSuperPrime(int n)
{
    bool result = false;
    if (IsPrime(n))
    {

        int p = 0;
        for (int i = 2; i < size(SieveOfEratosthenes(n)); i++)
        {
            if (SieveOfEratosthenes(n)[i] == true)
            {
                p++;
            }
        }
        if (IsPrime(p))
        {
            result = true;
        }
    }
    return  result;
}



int main()
{
    system("chcp 1251");
    int a;
    cout << "Введите положительное число: ";
    cin >> a;
    if (IsSuperPrime(a))
    {
        cout << "Число " << a << " является Супер Простым!";
    }
    else
    {
        cout << "Число " << a << " НЕ является Супер Простым!";
    }
}
