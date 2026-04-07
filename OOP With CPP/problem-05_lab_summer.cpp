// Problem 5 Area (Function overloading)

#include <iostream>
#define PI 3.1416
using namespace std;

class Area
{
public:
    float area(float side)
    {
        return side * side;
    }
    float area(float l, float w)
    {
        return l * w;
    }
    float area(int b, float h)
    {
        return 0.5 * b * h;
    }
    float area(double r)
    {
        return PI * r * r;
    }
};

int main()
{
    Area obj;
    float side, l, w, h, r;
    int b;

    cout << "Square Side: ";
    cin >> side;
    cout << "Area = " << obj.area(side) << endl;

    cout << "Rectangle Length & Width: ";
    cin >> l >> w;
    cout << "Area = " << obj.area(l, w) << endl;

    cout << "Triangle Base & Height: ";
    cin >> b >> h;
    cout << "Area = " << obj.area(b, h) << endl;

    cout << "Circle Radius: ";
    cin >> r;
    cout << "Area = " << obj.area(r) << endl;

    return 0;
}