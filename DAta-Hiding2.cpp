#include <iostream>
using namespace std;
class Rectangle //class decelration
{
private:
    int length; //data member
    int breadth;

public:
    void setlength(int l) //set the length
    {
        length = l;
    }
    void setbreadth(int b) //set the breadth
    {
        breadth = b;
    }
    int getlength() //return the length
    {
        return length;
    }
    int getbreadth() //return the length
    {
        return breadth;
    }
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
    r1.setlength(10);
    r1.setbreadth(10);
    cout << "Area is :" << r1.area() << endl;
    cout << "" << r1.perimeter() << endl;
    cout << "Breadth is :" << r1.getlength();
}
