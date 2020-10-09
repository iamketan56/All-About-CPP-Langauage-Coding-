#include <iostream>
using namespace std;
int fun(int x, int y, int z) //formal parmeter
{
    return x + y + z;
}

int main()
{
    cout << fun(1, 2, 3); //actual parameter
}