#include <iostream>
using namespace std;
class VariableTypes{
public:
    string name;                    // instance variable
    int id;                         // instance variable
    static string universityName;   // static variable
    VariableTypes(string n, int i){ // constructor
        name = n;
        id = i;
    }

    void display(){
        cout << "Name : " << name << endl;
        cout << "Id : " << id << endl;
        cout << "University : " << universityName << endl;
    }
};
string VariableTypes::universityName = "ABC University"; // static variable initialize
int main(){
    VariableTypes obj1("Rahim", 101);
    obj1.display();
    return 0;
}