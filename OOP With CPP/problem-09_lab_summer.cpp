// Problem 9 Prime check

#include <iostream>
using namespace std;

class Prime
{
public:
    int num, f = 0;

    void check()
    {
        cout << "Give Number: ";
        cin >> num;

        if (num <= 1)
            f = 1;

        for (int i = 2; i < num && f == 0; i++)
        {
            if (num % i == 0)
            {
                f = 1;
            }
        }

        if (f == 0)
            cout << "Prime Number\n";
        else
            cout << "Not Prime\n";
    }
};

int main()
{
    Prime a;
    a.check();
}