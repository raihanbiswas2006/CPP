#include <iostream>
#define PI 3.1416
using namespace std;

inline float areaSquare(float side){
    return side * side;
}
inline float areaRectangle(float length, float width){
    return length * width;
}
inline float areaTriangle(float base, float height){
    return 0.5 * base * height;
}
inline float areaCircle(float radius){
    return PI * radius * radius;
}

int main(){

    float side, length, width, base, height, radius;
    cout << "\nGive Side of Square: ";

    cin >> side;

    cout << "Area of Square: " << areaSquare(side) <<endl;
    cout << "\nGive Length and Width of Rectangle: ";

    cin >> length >> width;

    cout << "Area of Rectangle: " << areaRectangle(length, width) <<endl;
    cout << "\nGive Base and Height of Triangle: ";

    cin >> base >> height;

    cout << "Area of Triangle: " << areaTriangle(base, height) <<endl;
    cout << "\nGive Radius of Circle: ";

    cin >> radius;
    cout << "Area of Circle: " << areaCircle(radius) <<endl;
    
    return 0;
}