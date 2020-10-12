#include <iostream>
using namespace std;
class Rectangle //class decelration
{
private:        //restrict data memeber from outside the class this is know as data hiding
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
    r1.length = 10; //This will show the error bcz of access is private for these data memebr is
    r1.breadth = 10;
}
