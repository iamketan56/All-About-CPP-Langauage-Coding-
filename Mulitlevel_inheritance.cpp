#include <iostream>
using namespace std;
class A
{
public:
    int x;
    void number()
    {
        cout << "Enter value of x= ";
        cin >> x;
        cout << "Number is: " << x << endl;
    }
};
class B : public A // derived class from base class
{
public:
    void square()
    {
        cout << "Square of the number is: " << x * x << endl;
    }
};
class C : public B // derived from class derive1
{
public:
    void cube()
    {
        cout << "Cube of the number is: " << x * x * x << endl;
    }
};
int main()
{
    C a;
    a.number();
    a.square();
    a.cube();
}