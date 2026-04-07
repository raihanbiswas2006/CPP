#include<iostream>
using namespace std;

class primeNum{
    public:
    int num, i, f=0;

    void PrmN();
};

void primeNum::PrmN(){
    
    cout << "Give Positive Number: ";
    cin >> num;

    if (num <= 1)
    {
        cout << "Not Prime." <<endl;
    }
    else if (num == 2)
    {
        cout << "Prime Number.";
    }
    else
    {
        for ( i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                f++;
            }
            
        }
        if (f == 0)
        {
            cout << "Prime."<<endl;
        }
        else
        {
            cout << "Not Prime."<<endl;
        }
    }
}

int main(){
    primeNum a;
    a.PrmN();
    return 0;
}