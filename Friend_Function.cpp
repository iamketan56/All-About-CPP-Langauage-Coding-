#include <iostream>
using namespace std;
class Test
{
private:
    int a = 10, b = 20, c = 30;
    friend void fun(); //Friend Function
};
void fun() //Private members are accessble here
{
    Test t;
    cout << t.a;
    cout << t.b;
    cout << t.c;
}
int main()
{
    fun();
}