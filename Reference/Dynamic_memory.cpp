#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int;
    *ptr = 4;

    cout << "The value of the integer is: " << *ptr << endl;

    delete ptr;
    ptr = nullptr;

    int *arr = new int[10];

    for (int i = 0; i < 10; i++)
    {
        arr[i] = i + 1;
    }

    // display
    cout << "Array values: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << endl;
    }

    delete arr;
    arr = nullptr;
}