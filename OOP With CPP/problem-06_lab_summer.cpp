// Problem 6 Sum (Overloaded function)

#include <iostream>
using namespace std;

int Sum(int a, int b)
{
    return a + b;
}

int Sum(int a, int b, int c)
{
    return a + b + c;
}

int main()
{

    int a, b, c;

    cout << "Give 2 Numbers: ";
    cin >> a >> b;
    cout << "Sum = " << Sum(a, b) << endl;

    cout << "Give 3 Numbers: ";
    cin >> a >> b >> c;
    cout << "Sum = " << Sum(a, b, c) << endl;

    return 0;
}