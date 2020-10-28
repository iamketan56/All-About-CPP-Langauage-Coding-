#include <iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 0;
    try
    {
        if (b == 0)
        {
            throw 1;
        }
        else
        {
            cout << a / b;
        }
    }
    catch (int e)
    {
        cout << "Division with Zero";
    }
}