#include <iostream>
using namespace std;

int main(){

    int n, a[100], b[100], c[100], split;

    cout << "Give size of array: ";
    cin >> n;

    cout << "Give A array elements: " <<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    split = (n + 1) / 2;

    for (int i = 0; i < split; i++)
    {
        b[i] = a[i];
    }

    for (int i = split; i < n; i++)
    {
        c[i - split] = a[i];
    }

    cout << "B array: " <<endl;
    for (int i = 0; i < split; i++)
    {
        cout << b[i] << " ";
    }

    cout << "\nC array: " <<endl;
    for (int i = 0; i < n - split; i++)
    {
        cout << c[i] << " ";
    }

    return 0;
}