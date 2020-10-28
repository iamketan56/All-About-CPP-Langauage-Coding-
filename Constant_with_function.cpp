#include <iostream>
using namespace std;
class demo
{
public:
    int x = 10, y = 11;
    void display() const
    {
        x++; //  we can do this..... this function can't moify anything  due to const
        cout << x << " " << y;
    }
};
int main()
{
    demo d;
    d.display();
}