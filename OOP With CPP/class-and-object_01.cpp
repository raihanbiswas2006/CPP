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
    return 0;
}