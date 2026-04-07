#include <iostream>
using namespace std;

int main(){

    int n, a[100], b[100], c[100], even = 0, odd = 0;

    cout << "Give size of array: ";
    cin >> n;

    cout << "Give A array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            b[even++] = a[i];
        }
        else
        {
            c[odd++] = a[i];
        }
    }

    cout << "B array even: " << endl;
    for (int i = 0; i < even; i++)
    {
        cout << b[i] << " ";
    }

    cout << "\nC array odd: " << endl;
    for (int i = 0; i < odd; i++)
    {
        cout << c[i] << " ";
    }

    return 0;
}