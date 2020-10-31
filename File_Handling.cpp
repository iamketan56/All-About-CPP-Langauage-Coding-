#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    //simple right data in  file
    ofstream outfile("Myfile.txt");
    outfile << "Hello I am ketan sharma" << endl;
    outfile << "Engineering Student" << endl;
    outfile.close();
}