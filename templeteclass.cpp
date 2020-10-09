#include <iostream>
using namespace std;
template <typename T>
T mymax(T x, T y)
{
    if (x > y)
        return x;
    else
        return y;
}
int main()
{
    int x = 10;
    int y = 5;
    int c = mymax(x, y);
    cout << c << endl;
    float d = mymax(0.7, 0.8);
    cout << d;
}