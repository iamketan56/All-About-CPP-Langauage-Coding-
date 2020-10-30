#include <iostream>
using namespace std;
namespace first
{
    void fun()
    {
        cout << "First Function" << endl;
    }
} // namespace first
namespace second
{
    void fun()
    {
        cout << "Second Function";
    }
} // namespace second
int main()
{
    first::fun();
    second::fun();
}