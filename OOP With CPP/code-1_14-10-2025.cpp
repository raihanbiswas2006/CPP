#include <iostream>
using namespace std;

int main(){

    int i, sum = 0, avg;

    for (i = 1; i <= 50; i++)
    {
        sum += i;
        avg = sum / 50;
        cout << "Average of The Series is: " << avg <<endl;
    }
    

    return 0;
}