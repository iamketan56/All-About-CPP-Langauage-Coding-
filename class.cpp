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
    Rectangle r1, r2;                                                   //r1 and r2 are the objects of Rectangle class
    r1.breadth = 10;                                                    // assign value to breadth of r1 object
    r1.length = 10;                                                     // assign value to Length of r1 object
    cout << "Area of First Object is " << r1.area() << endl;            //Return area
    cout << "Perimeter of First Object is " << r1.perimeter() << endl;  //return perimeter
    r2.length = 11;                                                     // assign value to length of r2 object
    r2.breadth = 11;                                                    // assign value to breadth of r2 object
    cout << "Area of  second object is " << r2.area() << endl;          //Return area
    cout << "Perimeter of second object is " << r2.perimeter() << endl; //return perimeter
}