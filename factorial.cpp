#include <iostream>
using namespace std;
int main()
{
    int number, fact = 1;
    cout << "Enter a number to find factorial" << endl;
    cin >> number;
    for (int i = 1; i <= number; i++)
    {
        fact = fact * i;
    }
    cout << "Factorial of " << number << " is " << fact;
}