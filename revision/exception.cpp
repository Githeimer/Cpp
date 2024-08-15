#include <iostream>
#include <stdexcept>

using namespace std;

void divide(int a, int b)
{
    if (b == 0)
    {
        throw std::runtime_error("Divison by zero");
    }

    std::cout << "result is: " << (a / b) << endl;
}

void performDivide()
{
    try
    {
        divide(10, 0);
    }
    catch (...)
    {
        std::cout << "Caught an exception, re throwing..." << std::endl;
        throw;
    }
}

int main()
{
    try
    {
        performDivide();
    }
    catch (std::runtime_error &e)
    {
        std::cout << "Caught an expection in main " << e.what() << endl;
    }

    return 0;
}