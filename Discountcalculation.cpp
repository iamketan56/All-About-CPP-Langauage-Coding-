#include <iostream>
using namespace std;
int main()
{
    cout << "Welcome to our shop" << endl;
    cout << "We are giving a discount as mentioned below" << endl;
    cout << "If bill amount is in between 100-500 then discount is 10%" << endl;
    cout << "If bill amount is greter then 500 then discount is 20%" << endl;
    cout << "Enter your Bill amount" << endl;
    int bill_ammount;
    int discount;
    cin >> bill_ammount;
    if (bill_ammount < 100)
    {
        discount = 0;
    }
    if (bill_ammount >= 100 && bill_ammount < 500)
    {
        discount = (bill_ammount * 10) / 100;
    }
    if (bill_ammount >= 500)
    {
        discount = (bill_ammount * 20) / 100;
    }
    cout << "you get a discount of " << discount << " Net payable amount is Bill ammount - discount  " << bill_ammount - discount;
}