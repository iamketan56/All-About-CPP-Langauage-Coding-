#include <iostream>
using namespace std;
class outer
{
public:
    int a = 10;
    static int b;
    void func()
    {
        i.show();
    }
    class inner
    {
    public:
        int x = 25;
        void show()
        {
            cout << "Value of x is " << x << endl;
            //  cout << "Value of A is " << a << endl; // can,t access simple data members
            cout << "Value of B is " << b; // can access static member
        }
    };
    inner i; // object of inner class
};
int outer::b = 5;
int main()
{
    outer obj;
    obj.func();
}