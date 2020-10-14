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
    bool islengthzero()
    {
        if (length == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    Rectangle r1;

    cout << r1.islengthzero() << endl; //Inspector Function

    r1.setlength(10);  //Mutator Function
    r1.setbreadth(10); //Mutator Function

    cout << "Length is :" << r1.getlength() << endl;   //Accessor Function
    cout << "Breadth is :" << r1.getbreadth() << endl; //Accessor Function

    cout << "Area is :" << r1.area() << endl;          //Facilitator Functions
    cout << "Perimter is: " << r1.perimeter() << endl; //Facilitator Functions
}
