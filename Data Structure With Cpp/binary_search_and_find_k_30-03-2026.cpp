#include <iostream>
using namespace std;

int binarySearch(int a[], int n, int k, int &c){
    int low = 0, high = n - 1;

    while (low <= high)
    {
        c++;
        int mid = (low + high) / 2;

        if (a[mid] == k)
            return mid;
        else if (a[mid] < k)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main(){

    int a[10] = {8, 3, 5, 10, 1, 38, 28, 15, 2, 20};

    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    int k = 1;
    int c = 0;

    int position = binarySearch(a, 10, k, c);

    if (position != -1)
        cout << "Element " << k << " found at position: " << position + 1 << endl;
    else
        cout << "Element not found" << endl;

    cout << "Steps (Complexity count): " << c << endl;

    return 0;
}
