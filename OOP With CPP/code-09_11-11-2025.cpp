#include<iostream>
using namespace std;

inline int add(int a, int b){
    return (a+b);
}
inline int sub(int a, int b){
    return (a-b);
}
inline int multi(int a, int b){
    return (a*b);
}
inline float div(float a, float b){
    return (a/b);
}

int main(){
    float x, y;

    cout << "\n Give Two Numbers: ";
    cin >> x >> y;

    cout << "Sumation of two Numbers: " << add(x,y);
    cout << "\n Subtraction of two Numbers: " << sub(x,y);
    cout << "\n Multiplication of two Numbers: " << multi(x,y);
    cout << "\n Divition of two Numbers: " << div(x,y);

    return 0;
}