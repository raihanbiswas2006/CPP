#include<iostream>
using namespace std;

class factorial{
    public:
    long long i, num = 5, fct = 1;

    void fact();
};

void factorial::fact(){
    for (i = 1; i <= num; i++)
    {
        fct *= i;

        cout << "Factorial: " << fct <<endl;
    }
}

int main(){
    factorial a;
    a.fact();
    return 0;
}