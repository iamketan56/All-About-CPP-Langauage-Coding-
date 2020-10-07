#include <iostream>
using namespace std;
int main()
{
    int *p; //intaialization
    int a = 10;
    p = &a; //referencing
    cout << "Without pointer" << endl;
    cout << a << endl;  //value of a
    cout << &a << endl; //address of a
    cout << "With pointer" << endl;
    cout << p << endl; //display address of a;
    cout << *p;        //display the value where p is pointing(Derefernecing)
}