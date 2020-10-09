#include <iostream>
using namespace std;
int fun(int x, int y, int z = 5) //
{
    return x + y + z;
}
//we can't do this
/*int fun(int x = 1, int y, int z = 5)
{
    return x * y * z;
}*/
int main()
{
    cout << fun(1, 2);
    // cout << fun(2);
}