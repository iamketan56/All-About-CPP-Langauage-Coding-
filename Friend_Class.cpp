#include <iostream>
using namespace std;
class A
{
private:
    int num1 = 10;
    friend class B; // friend class
};
class B
{
public:
    int num2 = 12;
    void show()
    {
        A ob;
        cout << "Value of num1 + num2 is :" << ob.num1 + num2;
    }
};
int main()
{
    B b;
    b.show();
}