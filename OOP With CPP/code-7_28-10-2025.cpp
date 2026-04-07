#include <iostream>
using namespace std;

class PrimeChecker{
public:

    bool isPrime(int n)
    {
        if (n <= 1)
            return false;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }

    void displayPrimes(int start, int end)
    {
        cout << "Prime Numbers from " << start << " to " << end << " are: ";
        for (int i = start; i <= end; i++)
        {
            if (isPrime(i))
            {
                cout << i << " ";
            }
        }
        cout << endl;
    }
};

int main()
{
    PrimeChecker checker;
    
    int start, end;

    cout << "Give the Start of the Range: ";
    cin >> start;
    cout << "Give the End of the Range: ";
    cin >> end;

    checker.displayPrimes(start, end);

    return 0;
}