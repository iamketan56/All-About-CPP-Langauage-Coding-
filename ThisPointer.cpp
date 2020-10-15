#include <iostream>
using namespace std;
class Rectangle //class decelration
{
private:
    int length; //data member
    int breadth;

public:
    Rectangle(int l, int b)
    {
        this->length = l; //curren object
        this->breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
};
int main()
{
    Rectangle r(10, 10);
    cout << "Area is :" << r.area();
}