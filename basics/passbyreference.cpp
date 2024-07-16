#include <iostream>

using namespace std;

void swap(int &, int &);

int main()
{
    int a, b;

    a = 10;
    b = 20;

    swap(a, b);

    return 0;
}

void swap(int &a, int &b)
{

    int temp;
    temp = a;
    a = b;
    b = temp;

    cout << "Swapped values are " << a << b << endl;
}
