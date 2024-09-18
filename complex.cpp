#include <iostream>
using namespace std;

class complex
{
    float x, y;

public:
    complex()
    {
        cout << "Constructor called" << endl;
    }

    complex(float real, float imag)
    {
        x = real;
        y = imag;
    }

    complex operator+(const complex &z);

    void display();
};

complex complex::operator+(const complex &z)
{
    complex temp;
    temp.x = x + z.x;
    temp.y = y + z.y;

    return (temp);
}

void complex::display()
{
    cout << x << " +j" << y << endl;
}

int main()
{
    complex obj1(3.0, 4.0);
    complex obj2(6.0, 7.0);
    complex obj3 = obj1 + obj2;

    obj1.display();
    obj2.display();
    obj3.display();

    return 0;
}