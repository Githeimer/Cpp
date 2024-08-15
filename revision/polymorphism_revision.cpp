#include <iostream>

using namespace std;

class Shape
{
protected:
    int h;

public:
    Shape() : h(0) {}
    Shape(int hh) : h(hh) {}

    virtual double area() = 0;
};