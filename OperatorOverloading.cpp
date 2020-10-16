#include <iostream>
using namespace std;
class Test
{
private:
    int a, b;

public:
    void seta(int l)
    {
        a = l;
    }
    void setb(int h)
    {
        b = h;
    }
    int geta()
    {
        return a;
    }
    int getb()
    {
        return b;
    }
    int add()
    {
        return a + b;
    }

    Test operator+(const Test &ts) // operator overloading
    {
        Test t;
        t.a = this->a + ts.a;
        t.b = this->b + ts.b;
        return t;
    }
};
int main()
{
    Test t1, t2, t3;
    t1.seta(10);
    t1.setb(10);
    t2.seta(15);
    t2.setb(15);
    cout << t1.add() << endl;
    cout << t2.add() << endl;
    t3 = t1 + t2;
    cout << t3.add() << endl;
}