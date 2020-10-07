#include <iostream>
using namespace std;
int main()
{
    int *p; //intaialization
    int a = 10;
    p = &a;                 //referencing
    cout << p << endl;      //adress of a
    cout << p + 1 << endl;  //next address/location
    cout << p - 1 << endl;  //privious address/location
    cout << *p << endl;     //value of a
    cout << *p + 1 << endl; //value of a +1
    cout << *(&p);          //address of a /where p is pointing
    //in output you can see here int take 4 bytes.(because address are inc/dec by 4 in next/privious location)
}