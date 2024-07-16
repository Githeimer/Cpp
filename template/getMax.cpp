#include <iostream>
using namespace std;

/// @brief
/// @tparam T
template <class T>
class mypair
{
protected:
    T a, b;

public:
    mypair(T first, T second)
    {
        a = first;
        b = second;
    }

    T getMax();
};

template <class T>
T mypair<T>::getMax()
{
    T gre;
    gre = a > b ? a : b;

    return gre;
}

int main()
{

    mypair<int> myobject(100, 75);
    cout << myobject.getMax();

    return 0;
}