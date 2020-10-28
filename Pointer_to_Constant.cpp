#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    const int *ptr = &x;
    cout << *ptr;   //we can acess the value
    cout << *ptr++; // we can not change the value

    int y = 20;
    ptr = &y;
    cout << *ptr; // we can change pointer to other variable only can not modify the value
}