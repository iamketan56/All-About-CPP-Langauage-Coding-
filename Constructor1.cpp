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
    Rectangle() //Constuctor name as class same as class name without any return type
    {
        length = 10;
        breadth = 10;
    }
};
int main()
{
    Rectangle r1; //at the time of creation of object Constuctor will automatically called
    cout << "Area is :" << r1.area() << endl;
    cout << "Perimeter:" << r1.perimeter() << endl;
}