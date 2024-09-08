#include <iostream>
using namespace std;

void name()
{
    cout << "hello" << endl;
}
void name(int x)
{
    cout << "hello" << x;
}
void name(int x, int y)
{
    cout << "hello" << x << y;
}

int main()
{
    name();
    name(10);
    name(10, 10);
    return 0;
}