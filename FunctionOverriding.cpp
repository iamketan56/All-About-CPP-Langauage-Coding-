#include <iostream>
using namespace std;
class Base
{
public:
    void display()
    {
        cout << "I am  from Base Class";
    }
};
class Derived : public Base
{
public:
    void display() // this function is override in Derived class
    {
        cout << "I am from Derived class ";
    }
};
int main()
{
    Derived d;
    d.display();
}