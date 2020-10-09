#include <iostream>
using namespace std;
void display(int *ptr)
{
    cout << *ptr;
}
int main()
{
    int a = 10;
    int *p;
    p = &a;
    display(p);
}