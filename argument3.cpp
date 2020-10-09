#include <iostream>
using namespace std;
void fun(int *x, int size) //formal parmeter
{
    for (int i = 0; i < 5; i++)
    {
        cout << x[i];
    }
}
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    fun(a, 5);
}