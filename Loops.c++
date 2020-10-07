#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Enter a number upto which you wanna print series" << endl;
    cin >> number;
    cout << "For loop" << endl;
    for (int i = 1; i <= number; i++)
        cout << i << endl;
    cout << "while loop" << endl;
    int i = 1;
    while (i != number)
    {
        cout << i << endl;
        i++;
    }
    cout << "do while loop" << endl;
    int j = 1;
    do
    {
        cout << j << endl;
        j++;
    } while (j != number);

    cout << "foreach loop" << endl;
    int arr[] = {10, 20, 30, 40};

    for (int x : arr)
        cout << x << endl;
}