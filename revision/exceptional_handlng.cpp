#include <iostream>
using namespace std;

void mightThrow(bool shouldThrow)
{
    if (shouldThrow)
    {
        throw 42; // Throwing an integer
    }
}

int main()
{
    try
    {
        mightThrow(true); // This will throw an integer
    }
    catch (int e)
    {
        cout << "Caught an integer exception: " << e << endl;
    }
    catch (...)
    {
        cout << "Caught an unknown exception" << endl;
    }
    return 0;
}
