// Problem 10 Prime numbers 1–100

#include <iostream>
using namespace std;

class PrimeNumbers
{
public:
    void printPrimes()
    {
        int num, i;
        
        for (num = 2; num <= 100; num++)
        {
            bool isPrime = true;

            for (i = 2; i * i <= num; i++)
            {
                if (num % i == 0)
                {
                    isPrime = false;
                    break;
                }
            }

            if (isPrime)
                cout << num << " ";
        }
    }
};

int main()
{
    PrimeNumbers p;
    p.printPrimes();
}