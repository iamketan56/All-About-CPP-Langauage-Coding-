#include <iostream>
using namespace std;
int max(int x, int y)
{
    return x > y ? x : y;
}
int min(int x, int y)
{
    return x < y ? x : y;
}

int main()
{
    int (*fr)(int, int);
    fr = max;
    cout << fr(10, 5) << endl;
    fr = min;
    cout << fr(6, 3);

}
