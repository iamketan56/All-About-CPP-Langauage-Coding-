#include <iostream>
using namespace std;
class
{
    int id;

public:
    void setid(int i)
    {
        this->id = i;
    }
    void printid()
    {
        cout << "ID : " << this->id << endl;
    }
} obj1;
int main()
{
    obj1.setid(12);
    obj1.printid();
    return 0;
}