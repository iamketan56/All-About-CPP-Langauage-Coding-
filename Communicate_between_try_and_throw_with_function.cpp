#include <iostream>
using namespace std;
int division(int a, int b)
{
    if (b == 0)
    {
        throw 1;
    }
    else
    {
        return a / b;
    }
}

int main()
{
    int a = 10;
    int b = 1;
    int c;
    try
    {
        c = division(a, b);
        cout << "Result is " << c;
    }
    catch (int e)
    {
        cout << "Division with Zero";
    }
}