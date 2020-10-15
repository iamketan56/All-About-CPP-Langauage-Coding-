#include <iostream>
using namespace std;
class Test
{
public:
    inline void fun(int a)
    {
        cout << "Cude of " << a << " is " << (a * a * a);
    }
};
int main()
{
    Test t;
    t.fun(2); //at the compile time code of fun function will put here to fast exeuction
}
