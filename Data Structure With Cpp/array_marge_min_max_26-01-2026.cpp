#include <iostream>
using namespace std;

int main(){

    int n1, n2, a[100], b[100], c[200];

    cout << "Give First Array Size: ";
    cin >> n1;

    cout << "Give 1st Array: " << endl;
    for (int i = 0; i < n1; i++)
    {
        cin >> a[i];
    }

    cout << "Give Second Array Size: ";
    cin >> n2;

    cout << "Give 2nd Array: " << endl;
    for (int i = 0; i < n2; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < n1; i++)
    {
        c[i] = a[i];
    }

    for (int i = 0; i < n2; i++)
    {
        c[n1 + i] = b[i];
    }

    int max = c[0], min = c[0];
    for (int i = 0; i < n1 + n2; i++)
    {
        if (c[i] > max)
            max = c[i];
        if (c[i] < min)
            min = c[i];
    }

    cout << "Maximum value: " << max <<endl;
    cout << "Minimum value: " << min <<endl;

    return 0;
}