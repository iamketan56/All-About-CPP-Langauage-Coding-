#include <iostream>
using namespace std;
void fun(int &x, int &y)
{
    x++;
    y++;
}
int main()
{
    int a = 1, b = 10;
    cout << "Earlier  " << a << " " << b << endl;
    fun(a, b);

    cout << "Now " << a << " " << b << endl;
}