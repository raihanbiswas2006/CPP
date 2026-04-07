#include<iostream>
using namespace std;

class average{
    public:
    int i, sum = 0, avg;

    void sum_avg();
};

void average::sum_avg(){
    for (i = 1; i <= 50; i++)
    {
        sum += i;
        avg = sum / 50;
        cout << "Average of The Series is: " << avg <<endl;
    }
}

int main(){
    average a;
    a.sum_avg();
    return 0;
}