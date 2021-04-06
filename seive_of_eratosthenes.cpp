//use to find the prime numbers upto a number
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 100;
    int a[n + 1];
    for (int i = 0; i <= n; i++)
    {
        a[i] = 1;
    }
    a[0] = 0;
    a[1] = 0;
    for (int i = 0; i <= sqrt(n); i++)
    {
        if (a[i] == 1)
        {
            for (int j = 2; i * j <= n; j++)
            {
                a[i * j] = 0;
            }
        }
    }
    for (int i = 0; i <= n; i++)
    {
        if (a[i] == 1)
        {
            cout << i << " ";
        }
    }
}
//complexity O(n.log(logn))