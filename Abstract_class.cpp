#include <iostream>
using namespace std;
class Base //Abstract class
{
public:
    virtual void fun1(); //Pure virtual function or abstract function
    virtual void fun2();
    void fun3()
    {
        cout << "This is Function 3" << endl;
    }
};
class deriverd : public Base
{
public:
    void fun1()
    {
        cout << "This is Function 1" << endl;
    }
    void fun2()
    {
        cout << "This is Function 2" << endl;
    }
};
int main()
{
    deriverd d;
    d.fun1();
    d.fun2();
    d.fun3();
}