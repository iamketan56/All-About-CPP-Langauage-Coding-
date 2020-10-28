#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 0, c;
    try
    {
        if (b == 0)
            throw(c);
        else
            c = a / b;
    }
    catch (char c) //catch block to handle/catch exception
    {
        cout << "Caught exception : char type ";
    }
    catch (int i) //catch block to handle/catch exception
    {
        cout << "Caught exception : int type ";
    }
    catch (short s) //catch block to handle/catch exception
    {
        cout << "Caught exception : short type ";
    }
}