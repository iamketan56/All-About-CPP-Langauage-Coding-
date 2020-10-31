#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    //simple right data in  file
    //Append Mode
    ofstream outfile("Myfile.txt", ios::app);
    outfile << "I am learning file handling concept" << endl;
    outfile << "And using Append mode here" << endl;
    outfile.close();

    //Truncate Mode it will erase all data then write this data
    ofstream outfile("Myfile.txt", ios::trunc);
    outfile << "I am learning file handling concept" << endl;
    outfile << "And using Append mode here" << endl;
    outfile.close();
}