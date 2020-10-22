#include <iostream>
using namespace std;

class Print
{
public:
    void print(int i)
    {
        cout << "Printing int: " << i << endl;
    }
    void print(double f)
    {
        cout << "Printing float: " << f << endl;
    }
    void print(char *c)
    {
        cout << "Printing character: " << c << endl;
    }
};

int main(void)
{
    Print p;

    // Call print to print integer
    p.print(5);

    // Call print to print float
    p.print(500.263);

    // Call print to print character
    p.print("Hello C++");

    return 0;
}