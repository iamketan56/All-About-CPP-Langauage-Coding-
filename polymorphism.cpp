#include <iostream>
using namespace std;
class Car
{
public:
    virtual void start()
    {
        cout << "Car Started" << endl;
    }
    virtual void stop()
    {
        cout << "CAr Stoped" << endl;
    }
};
class Innova : public Car
{
public:
    virtual void start()
    {
        cout << "Innova Started" << endl;
    }
    virtual void stop()
    {
        cout << "Innova Stoped" << endl;
    }
};

class Swift : public Car
{
public:
    virtual void start()
    {
        cout << "Swift Started" << endl;
    }
    virtual void stop()
    {
        cout << "Swift Stoped" << endl;
    }
};
int main()
{
    //Innova
    Car *c = new Innova();
    c->start();
    c->stop();
    //Swift
    c = new Swift();
    c->start();
    c->stop();
}