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
    Rectangle(int x, int y) //Parameterzied Constuctor when the object created it will call and assgin the x,y value to length,breadth
    {
        length = x;
        breadth = y;
    }
};
int main()
{
    Rectangle r1(10, 10); //
    cout << "Area is :" << r1.area() << endl;
    cout << "Perimeter:" << r1.perimeter() << endl;
}