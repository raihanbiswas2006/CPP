#include <iostream>
using namespace std;

int main(){

    int n, key, count = 0, arr[100];

    cout << "Give Number of Elements: ";
    cin >> n;

    cout << "Give array Elements: " <<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout <<endl;

    cout << "Give Value to Search: ";
    cin >> key;

    int low = 0, high = n - 1;
    bool found = false;

    while (low <= high)
    {
        count++;
        int mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            cout << "Value Position: " << mid + 1 <<endl;
            found = true;
            break;
        }
        else if (key < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    if (!found)
    {
        cout << "Value not found" <<endl;
    }

    cout << "Complexity: " << count <<endl;

    return 0;
}