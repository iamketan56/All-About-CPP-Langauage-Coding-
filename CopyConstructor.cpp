#include <iostream>
using namespace std;
class Test //class decelration
{
public:
    int a;  //data member
    int *p; //pointer
    Test(int x)
    {
        a = x;
        p = new int[a]; // point to array of size a
    }
    Test(Test &t)
    {
        a = t.a;
        p = new int[a]; // earlier point to first array of size a but now it will point to new array
    }
};
int main()
{
    Test t(5); // a=5 and p will point to array of size 5 of object t
    cout << "Value of a:" << t.a << endl;
    cout << "P ponts to" << t.p << endl;
    Test t2(t); // a=5 but p will now point to new array of of oject t2
    cout << "Value of a:" << t2.a << endl;
    cout << "P ponts to" << t2.p << endl;
    //different address of P
}