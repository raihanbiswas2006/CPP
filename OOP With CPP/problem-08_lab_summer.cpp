// Problem 8 Area (inline function)

#include <iostream>
#define PI 3.1416
using namespace std;

inline float areaSquare(float side)
{
    return side * side;
}
inline float areaRectangle(float l, float w)
{
    return l * w;
}
inline float areaTriangle(int b, float h)
{
    return 0.5 * b * h;
}
inline float areaCircle(double r)
{
    return PI * r * r;
}

int main()
{
    float side, l, w, b, h, r;

    cout << "Square Side: ";
    cin >> side;
    cout << "Area = " << areaSquare(side) << endl;

    cout << "Rectangle L W: ";
    cin >> l >> w;
    cout << "Area = " << areaRectangle(l, w) << endl;

    cout << "Triangle Base Height: ";
    cin >> b >> h;
    cout << "Area = " << areaTriangle(b, h) << endl;

    cout << "Circle Radius: ";
    cin >> r;
    cout << "Area = " << areaCircle(r) << endl;

    return 0;
}