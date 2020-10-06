#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter a number" << endl;
    cin >> a;
    if (a > 10)
    {
        cout << "Number is grater then 10" << endl;
        if (a > 20)
        {
            cout << "Number is greater then 20" << endl;
        }
        else
        {
            cout << "Number is in between 10 and 20";
        }
    }
    else
    {
        cout << "Number is less then 10" << endl;
    }
}
