// Problem 4 Average (Polymorphism / Overloaded function)

#include <iostream>
using namespace std;

class Average
{
public:
    float average(int a, int b)
    {
        return (a + b) / 2;
    }

    float average(float a, int b)
    {
        return (a + b) / 2.0;
    }

    float average(int a, float b)
    {
        return (a + b) / 2.0;
    }
};

int main()
{
    Average obj;
    float a, b;

    cout << "Give First Number: ";
    cin >> a;

    cout << "Give Second Number: ";
    cin >> b;

    cout << "Average: " << obj.average((int)a, (int)b) << endl;
    cout << "Average: " << obj.average(a, (int)b) << endl;
    cout << "Average: " << obj.average((int)a, b) << endl;

    return 0;
}