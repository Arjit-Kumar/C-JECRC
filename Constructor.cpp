#include <iostream>
#include <string>
using namespace std;

class person
{
    string name;
    int age;

public:
    person()
    {
        cout << "Enter  your name: " << endl;
        cin >> name;
        cout << "Enter  your age: " << endl;
        cin >> age;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    person p;

    p.display();
    return 0;
}