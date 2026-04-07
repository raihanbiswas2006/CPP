#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Give array size: ";
    cin >> n;

    int arr[100];
    cout << "Geve array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int element, pos;
    cout << "Give element to insert: ";
    cin >> element;

    cout << "Give position (start from 0): ";
    cin >> pos;

    if (pos < 0 || pos > n)
    {
        cout << "Error";
        return 0;
    }
    for (int i = n; i > pos; i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos] = element;
    n++;

    cout << "Array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
    
    return 0;
}