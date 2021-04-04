#include <iostream>
using namespace std;
int main()
{
    int a[] = {0, 1, 1, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1};
    int j = 0;
    for (int i = 0; i < 12; i++)
    {
        if (a[i] == 0)
        {
            a[j++] = a[i];
        }
    }
    while (j != 13)
    {
        a[j++] = 1;
    }
    for (int i = 0; i < 13; i++)
    {
        cout << a[i] << " ";
    }
}