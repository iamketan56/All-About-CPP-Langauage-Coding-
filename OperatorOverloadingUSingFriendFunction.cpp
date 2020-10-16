#include <iostream>
using namespace std;
class Test
{
private:
    int a;

public:
    void seta();
    int geta();
    friend Test operator-(Test); //FRIEND FUNCTION
};

void Test ::seta()
{
    a = 10;
}

int Test ::geta()
{
    return a;
}
Test operator-(Test obj) // operator overloading
{
    obj.a = -(obj.a);
    return obj;
}

int main()
{
    Test t1;
    t1.seta();
    cout << t1.geta();
    t1 = -t1;
    cout << t1.geta();
}