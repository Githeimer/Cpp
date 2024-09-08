#include <iostream>
using namespace std;

template <class T>
void sort_array(T *a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                T temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

template <class T>
void display_array(T *a, int n)
{
    cout << "ARRAY AFTER SORTING:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int *p = new int[n];

    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    sort_array(p, n);
    display_array(p, n);

    delete[] p;

    return 0;
}
