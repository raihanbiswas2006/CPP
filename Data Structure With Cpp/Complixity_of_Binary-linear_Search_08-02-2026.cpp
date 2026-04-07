#include <iostream>
using namespace std;

int main(){

    int n, key, linearCount = 0, binaryCount = 0;
    int arr[100], temp[100];
    bool lFound = false;
    bool bFound = false;

    cout << "Give Number of Elements: ";
    cin >> n;

    cout << "Give Array Elements: " <<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        temp[i] = arr[i];
    }

    cout << "Give Value to Linear Search: ";
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        linearCount++;
        if (arr[i] == key)
        {
            cout << "\nLinear Search: " << i + 1 <<endl;
            lFound = true;
            break;
        }
    }

    if (!lFound)
    {
        cout << "\nLinear Search Value not found" <<endl;
    }

    cout << "Linear Search Complexity: " << linearCount <<endl;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (temp[j] > temp[j + 1])
            {
                int t = temp[j];
                temp[j] = temp[j + 1];
                temp[j + 1] = t;
            }
        }
    }

    cout << "\nSorted Array for Binary Search: ";
    for (int i = 0; i < n; i++)
    {
        cout << temp[i] << " ";
    }
    cout <<endl;

    int min = 0, max = n - 1, mid;

    while (min <= max)
    {
        binaryCount++;
        mid = (min + max) / 2;

        if (temp[mid] == key)
        {
            cout << "Binary Search: " << mid + 1 <<endl;
            bFound = true;
            break;
        }
        else if (key < temp[mid])
        {
            max = mid - 1;
        }
        else
        {
            min = mid + 1;
        }
    }

    if (!bFound)
    {
        cout << "Binary Search Value not found" <<endl;
    }

    cout << "Binary Search Complexity: " << binaryCount <<endl;

    return 0;
}