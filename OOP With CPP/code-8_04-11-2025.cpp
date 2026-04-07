#include <iostream>
using namespace std;

float average(int a, int b){
    return (a + b) / 2.0f;
}

float average(float a, int b){
    return (a + b) / 2.0f;
}

float average(int a, float b){
    return (a + b) / 2.0f;
}

int main(){

    float a, b, avg;

    cout << "Give First Number: ";
    cin >> a;

    cout << "Give Second Number: ";
    cin >> b;

    avg = average((int)a, (int)b);
    cout << "Average : " << avg <<endl;

    avg = average(a, (int)b);
    cout << "Average : " << avg <<endl;

    avg = average((int)a, b);
    cout << "Average : " << avg <<endl;

    return 0;
}