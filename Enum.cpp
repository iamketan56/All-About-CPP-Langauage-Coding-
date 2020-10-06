#include <iostream>
#include <conio.h>
using namespace std;
enum day
{
    mon,
    tue = 3,
    wed,
    thu,
    fri = 8,
    sat
};
int main()
{

    day d;
    cout << mon << endl;
    cout << tue << endl;
    cout << wed << endl;
    cout << thu << endl;
    cout << fri << endl;
    cout << sat;
}