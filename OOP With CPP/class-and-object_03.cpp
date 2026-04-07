#include <iostream>
using namespace std;
class Student
{
public:
    int id;
    double cgpa;

    void display()
    {
        cout << id << " " << cgpa << endl;
    }
};
int main()
{

    Student alif;

    alif.id = 101;
    alif.cgpa = 3.80;
    alif.display();
    
    Student esha;

    esha.id = 102;
    esha.cgpa = 3.90;
    esha.display();
    
    return 0;
}