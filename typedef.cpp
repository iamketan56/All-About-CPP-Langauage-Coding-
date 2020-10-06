#include <iostream>
using namespace std;
typedef int marks;
typedef int rollno;
int main()
{
    marks m1, m2, m3, m4;
    rollno r1, r2, r3, r4;
    cout << "Enter the Roll number of student and marks also" << endl;
    cin >> r1 >> m1;

    cout << "Enter the Roll number of student and marks also" << endl;
    cin >> r2 >> m2;

    cout << "Enter the Roll number of student and marks also" << endl;
    cin >> r3 >> m3;

    cout << "Enter the Roll number of student and marks also" << endl;
    cin >> r4 >> m4;

    cout << "Roll Number " << r1 << " has obtained " << m1 << " marks";
    cout << "Roll Number " << r2 << " has obtained " << m2 << " marks";
    cout << "Roll Number " << r3 << " has obtained " << m3 << " marks";
    cout << "Roll Number " << r4 << " has obtained " << m4 << " marks";
}