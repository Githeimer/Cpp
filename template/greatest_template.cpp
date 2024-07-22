#include <iostream>
using namespace std;

template class<T> class Array
{
    T a[5];

public:
    void set_a(int s)
    {
        int i;

        for (i = 0; i < 4; i++)
        {
            cout << "VALUE : " << i + 1 << endl;
            cin >> a[i];
        }
    }
}