#include <iostream>
using namespace std;

class HelloWorld // Class definition "defines a class named HelloWorld"
{
public:
    void display() // Member function declaration "member function named display"
    {
        cout << "Hello, World. I am Raihan Biswas." <<endl;
    }
};

int main()
{
    HelloWorld obj; // Create object "object creation of HelloWorld class"
    obj.display();  // Call member function "function call using object to display message"
    return 0;
}