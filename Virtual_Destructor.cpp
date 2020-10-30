#include <iostream>
using namespace std;
//parent class
class Parent
{
public:
    Parent()
    {
        cout << "Inside base class" << endl;
    }
    virtual ~Parent()
    {
        cout << "Delete Base Class" << endl;
    }
};
//child class
class Child : public Parent
{
public:
    Child()
    {
        cout << "Inside sub class" << endl;
    }
    ~Child()
    {
        cout << "Delete Sub class" << endl;
    }
};
int main()
{
    Parent *p = new Child();
    delete p; // it will call the parent class dest. but if we want to call child class dest first then put virtual keyword before parent class dest.
    return 0;
}