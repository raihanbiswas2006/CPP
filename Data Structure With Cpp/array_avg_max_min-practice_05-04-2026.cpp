#include <iostream>
using namespace std;

int main(){
    
    int arr[10];
    int sum = 0;

    cout << "Give 10 numbers: " <<endl;

    for(int i = 0; i < 10; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    float avg = sum / 10.0;

    int max = arr[0];
    int min = arr[0];

    for(int i = 1; i < 10; i++) {
        if(arr[i] < min)
            min = arr[i];
    }

    int com = 0;

    for(int i = 1; i < 10; i++) {
        com++;
        if(arr[i] > max)
            max = arr[i];
    }

    cout << "Average = " << avg <<endl;
    cout << "Maximum = " << max <<endl;
    cout << "Minimum = " << min <<endl;
    cout << "Maximum Value Complexity = " << com <<endl;
    
    return 0;
}