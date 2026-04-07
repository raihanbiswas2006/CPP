// Problem 2 Factorial

#include <iostream>
using namespace std;

class factorial
{
public:
    long long i, num, fct = 1;

    void fact();
};

void factorial::fact()
{
    cout << "Give Number: ";
    cin >> num;

    for (i = 1; i <= num; i++)
    {
        fct *= i;

        cout << "Factorial: " << fct << endl;
    }
}

int main()
{
    factorial a;
    a.fact();
    return 0;
}