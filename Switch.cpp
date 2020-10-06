#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number " << endl;
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "Number is 1" << endl;
        break;
    case 2:
        cout << "Number is 2" << endl;
        break;
    case 3:
        cout << "Number is 3" << endl;
        break;
    case 4:
        cout << "Number is 4" << endl;
        break;
    default:
        cout << "Number is Greater then 4"
             << " and number is " << a;
        break;
    }
}