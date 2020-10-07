#include <iostream>
using namespace std;
int main()
{
    int a = 13;
    cout << "Break :";
    for (int i = 0; i < a; i++)
    {
        cout << i << endl;
        if (i == 11)
        {
            cout << "Stoped at " << i << endl;
            break;
        }
    }
    cout << "Continue :";
    for (int i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            continue;
        }
        cout << i << endl;
    }
}