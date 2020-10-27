#include <iostream>
using namespace std;
class Test
{
private:
    int a, b;

public:
    static int count;
    Test()
    {
        a = 10;
        b = 20;
        count++;
    }
    static int getcount() // it can access static member only
    {
        return count;
    }
};
int Test::count = 0;
int main()
{

    cout << Test::getcount();
    Test t1;
    Test t2;
    cout << Test::getcount();
}
