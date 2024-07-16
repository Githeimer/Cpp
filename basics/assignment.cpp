// Write a program to define a class which can represent time following members:
// Private Data members: HH which stores time in hours, MM which stores time in minutes
// Default, parameterized and copy constructor
// setTime(int a, int b) – which sets values in HH and MM
// getHH()-returns HH
// getMM()-returns MM
// Implement Operator Overloading (operator >) in the class using member function and friend function. If a time is greater than another time, it returns 1 else returns 0. Write a well driven program.

#include <iostream>
using namespace std;

class Time
{
private:
    int HH;
    int MM;

public:
    Time()
    {
        HH = 0;
        MM = 0;
    }

    Time(int h, int m) : HH(h), MM(m) {}
};