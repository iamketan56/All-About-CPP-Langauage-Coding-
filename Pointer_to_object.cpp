#include <iostream>
using namespace std;
class Rectangle //class decelration
{
public:
    int length; //data member
    int breadth;
    int area() // memebr function
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * length * breadth;
    }
};
int main()
{
    Rectangle r1;
    Rectangle *p;
    p = &r1;
    p->length = 10;
    p->breadth = 10;
    cout << "Area is :" << p->area();
}