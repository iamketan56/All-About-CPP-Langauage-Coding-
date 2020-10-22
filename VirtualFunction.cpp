#include <iostream>
using namespace std;
class Base
{
public:
    virtual void display()
    {
        cout << "I am  from Base Class" << endl;
    }
    void show()
    {
        cout << "I am showing base class" << endl;
    }
};
class Derived : public Base
{
public:
    void display() // this function is override in Derived class
    {
        cout << "I am from Derived class" << endl;
    }

    void show()
    {
        cout << "I am showing derived class" << endl;
    }
};
int main()
{
    Base *b;
    Base obj1;
    Derived obj2;
    b = &obj1;
    b->display();
    b->show();
    b = &obj2;
    b->display();
    b->show();
}