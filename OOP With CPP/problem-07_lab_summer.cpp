// Problem 7 Calculator (inline function)

#include <iostream>
using namespace std;

inline float add(float a, float b)
{
    return (a + b);
}
inline float sub(float a, float b)
{
    return (a - b);
}
inline float multi(float a, float b)
{
    return (a * b);
}
inline float div(float a, float b)
{
    return (a / b);
}

int main()
{
    float x, y;

    cout << "Give Two Numbers: ";
    cin >> x >> y;

    cout << "Sum = " << add(x, y) << endl;
    cout << "Subtraction = " << sub(x, y) << endl;
    cout << "Multiplication = " << multi(x, y) << endl;
    cout << "Division = " << div(x, y) << endl;

    return 0;
}