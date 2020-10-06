#include <iostream>
using namespace std;
int main()
{
    //without user input
    /*int a = 10;
    if (a % 2 == 0)
    {
        cout << "Even number" << endl;
    }
    else
    {
        cout << "Odd number";
    }
*/
    //with user input
    int a;
    cout << "Enter a number to check to even or odd" << endl;
    cin >> a;
    if (a % 2 == 0)
    {
        cout << "Even number" << endl;
    }
    else
    {
        cout << "Odd number";
    }
}