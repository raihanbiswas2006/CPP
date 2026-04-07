// Problem 3 Swap (A)

#include <iostream>
using namespace std;

class swaping
{
public:
    int a, b, temp;

    void swp();
};

void swaping::swp()
{

    cin >> a >> b;

    temp = a;
    a = b;
    b = temp;

    cout << "SWAP: \n"
         << a << "\n"
         << b << endl;
}

int main()
{
    swaping a;
    a.swp();
    return 0;
}