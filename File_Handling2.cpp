#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream infile;
    infile.open("Myfile.txt");
    if (!infile)
    {
        cout << "File can not opened" << endl;
    }
    string str;
    while (!infile.eof())
    {
        str = infile.get();
        cout << str;
    }
    if (infile.eof())
    {
        cout << "End of file" << endl;
    }
}