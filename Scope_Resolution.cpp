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
    int perimeter();
};
int Rectangle::perimeter()
{
    return 2 * length * breadth;
}
int main()
{
    Rectangle r;
    r.length = 10;
    r.breadth = 10;
    cout << "Area is: " << r.area() << endl;
    cout << "Perimater is :" << r.perimeter();
}