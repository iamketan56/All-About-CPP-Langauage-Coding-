#include <iostream>
using namespace std;
class A
{
public: // every thing is available at every where
    int a = 10;
    int b = 11;
    void add()
    {
        cout << "Addition is: " << a + b;
    }
};
class B : public A
{
public:
    int c = a + b; //inherit the value of a and b
public:
    void diff()
    {
        cout << "difference is: " << a - b;
    }
};
int main()
{
    B ob; //a ,b and add function is accesable here due to public specifier
    ob.add();
    cout << endl;
    ob.diff();
}