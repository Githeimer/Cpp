#include <iostream>
using namespace std;

class Shape
{
public:
    double side_one, side_two;

    Shape()
    {
        side_one = 0;
        side_two = 0;
    }

    Shape(double a, double b)
    {
        side_one = a;
        side_two = b;
    }

    void set_data(double a, double b)
    {
        side_one = a;
        side_two = b;
    }

    virtual void display_area()
    {
        cout << "Display from Base Class." << endl;
    }

};

class Triangle: public Shape 
{
    double side_c;

    void set_data()
};