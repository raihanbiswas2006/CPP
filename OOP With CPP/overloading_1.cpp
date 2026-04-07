#include <iostream>
using namespace std;
class Student
{
public:
    void add(int a, int b)
    {
        cout << a + b << endl;
    }
    void add(int a, int b, int c)
    {
        cout << a + b + c << endl;
    }
    void add()
    {
        cout << "Default" << endl;
    }
};
int main()
{
    Student obj;
    obj.add(10, 20);
    obj.add(10, 20, 30);
    obj.add();
}