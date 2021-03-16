#include <iostream>
#include <algorithm>
using namespace std;
int giveRandoms(int lower, int upper)
{
    int num = (rand() %
               (upper - lower + 1)) +
              lower;
    return num;
}
int main()
{
    int size;
    cin >> size;
    int a[size + 1];
    for (int i = 1; i <= size; i++)
    {
        cin >> a[i];
    }
    int random[size + 1];
    for (int i = 1; i <= size; i++)
    {
        random[i] = giveRandoms(0, size);
    }
    cout << "Random Index Array : " << endl;

    for (int i = 1; i <= size; i++)
    {
        cout << random[i] << " ";
    }
    cout << endl;
    int output[size + 1];
    int j = 1;
    for (int i = 1; i <= size; i++)
    {
        if (random[i] == 0)
        {
            output[j] = a[i];
            j++;
        }
        else
        {
            output[j] = a[random[i]];
            j++;
        }
    }
    cout << "Output :" << endl;
    for (int i = 1; i <= size; i++)
    {
        cout << output[i] << " ";
    }
}