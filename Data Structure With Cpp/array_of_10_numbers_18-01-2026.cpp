#include<iostream>
using namespace std;
int main(){

    int numbers[10];
    int sum = 0;

    cout << "Enter 10 Numbers: " << endl;
    for(int i = 0; i < 10; i++){
        cin >> numbers[i];
        sum += numbers[i];
    }

    float average = sum / 10;

    cout << "Average of the Numbers: " << average << endl;

return 0;
}
