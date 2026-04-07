#include<iostream>
using namespace std;
int main(){

    int arr[10];
    int max, min;

    cout << "Give 10 numbers: " << endl;
    for (int i = 0; i < 10; i++)
    {
        /* code */cin >> arr[i];
    }

    max = min = arr[0];

    for (int  i = 1; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    
    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;

return 0;
}