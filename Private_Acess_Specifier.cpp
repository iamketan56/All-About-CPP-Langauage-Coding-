#include <iostream>
using namespace std;
class A
{
private: // every thing is available only with in same class
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
    int c = a + b; // value of a and b is not accessable here sue to private specifier
public:
    void diff()
    {
        cout << "difference is: " << a - b;
    }
};
int main()
{
    B ob; //a ,b and add function is not accesable here due to private specifier
    ob.add();
    cout << endl;
    ob.diff();
}