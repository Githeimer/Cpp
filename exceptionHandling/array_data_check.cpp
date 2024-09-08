#include <iostream>
#include <stdexcept>

using namespace std;

void accessCheck(int *a, int size, int index)
{
    if (index >= size || index < 0)
    {
        throw runtime_error("Index out of bounds");
    }
    cout << "The value at index " << index << " is: " << a[index] << endl;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;

    try
    {
        accessCheck(arr, size, 5);
        catch (const runtime_error &e)
        {
            cout << "Error found! " << e.what() << endl;
        }

        return 0;
    }
