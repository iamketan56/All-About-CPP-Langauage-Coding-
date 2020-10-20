//Hierarchial inheritance
#include <iostream>
using namespace std;
class A
{
public:
    int a = 11;
    int b = 10;
    void add()
    {
        cout << "Addition is: " << a + b;
    }
};
class B : public A
{
    int c = a - b; //inherit the value of a and b
public:
    void diff()
    {
        cout << "difference is: " << c;
    }
};
class C : public A
{
    int d = a * b; //inherit the value of a and b
public:
    void mul()
    {
        cout << "Multiplication is : " << d;
    }
};
int main()
{
    B ob;
    ob.add();
    cout << endl;
    ob.diff();
    cout << endl;
    C obj;
    obj.add();
    cout << endl;
    obj.mul();
}