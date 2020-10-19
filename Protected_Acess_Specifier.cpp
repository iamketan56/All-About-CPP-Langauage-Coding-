#include <iostream>
using namespace std;
class A
{
protected: // every thing is available at only within same class and in base class not in main function
    int a = 10;
    int b = 11;
    void add()
    {
        cout << "Addition is: " << a + b;
    }
};
class B : public A
{

    int c = a + b; //inherit the value of a and b but now protected form
public:
    void diff()
    {
        cout << "difference is: " << a - b;
    }
};
int main()
{
    B ob;     //a ,b and add function is not accesable here due to protected specifier
    ob.add(); //
    cout << endl;
    ob.diff();
}