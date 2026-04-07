#include <iostream>
using namespace std;

int main(){

    int n, key, arr[100];
    bool found = false;
    int count = 0;

    cout << "Give Number of Element: ";
    cin >> n;

    cout << "Give array Element: " <<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Give value to Search: ";
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        count++;
        if (arr[i] == key)
        {
            cout << "Value Found at Position: " << i + 1 <<endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Value not Found" <<endl;
    }

    cout << "Complixity: " << count <<endl;

    return 0;
}