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
};
int Test::count = 0;
int main()
{
    Test t1;
    cout << t1.count << endl; // call with object
    Test t2;
    cout << t2.count << endl;
    cout << Test::count; // call with class name
}
