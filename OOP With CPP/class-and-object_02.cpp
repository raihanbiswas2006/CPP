#include <iostream>
using namespace std;
class Student
{
public:
    int id;
    double cgpa;
};
int main()
{
    Student alif;
    alif.id = 101;
    alif.cgpa = 3.80;
    cout << alif.id << " " << alif.cgpa << endl;
    Student esha;
    esha.id = 102;
    esha.cgpa = 3.90;
    cout << esha.id << " " << esha.cgpa << endl;
    return 0;
}