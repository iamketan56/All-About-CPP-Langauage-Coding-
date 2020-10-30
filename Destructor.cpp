#include <iostream>
using namespace std;
class test
{
public:
    test()
    {
        cout << "Constructor" << endl;
    }

    ~test()
    {
        cout << "Destructor";
    }
};
int main()
{
    test *t = new test(); // Constructor called
    delete t;             //Destructor called
}