#include<iostream>
using namespace std;

class swaping{
    public:
    int a, b;

    void swp();
};

void swaping::swp(){
    
    cin >> a >> b;

    a = a + b;
    b = a - b;
    a = a - b;

        cout << "SWAP: \n" << a << "\n" << b <<endl;
}

int main(){
    swaping a;
    a.swp();
    return 0;
}