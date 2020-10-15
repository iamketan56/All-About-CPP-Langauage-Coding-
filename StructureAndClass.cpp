#include <iostream>
using namespace std;
class Test
{
    int x; // x is private
};
struct Test
{
    int y; // x is public
};
int main()
{
    Test t;
    t.x = 20; // compiler error because x is private
    t.y = 10;
}