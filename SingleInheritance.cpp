#include <iostream>
using namespace std;
class A
{
public:
    int a = 10;
    int b = 11;
    void add()
    {
        cout << "Addition is: " << a + b;
    }
};
class B : public A
{
    int c = a + b; //inherit the value of a and b
public:
    void diff()
    {
        cout << "difference is: " << a - b;
    }
};
int main()
{
    B ob;
    ob.add();
    cout << endl;
    ob.diff();
}