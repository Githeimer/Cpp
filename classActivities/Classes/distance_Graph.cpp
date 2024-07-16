#include <iostream>
#include <cmath>
using namespace std;

class Coordinate
{
public:
    double x, y;
};

class Point
{
private:
    Coordinate start, end;

public:
    void SetStart(double ax, double ay)
    {
        start.x = ax;
        start.y = ay;

        cout << "Start Point initialized \n";
    }

    void SetEnd(double ax, double ay)
    {
        end.x = ax;
        end.y = ay;

        cout << "End Point initialized \n";
    }

    double distance()
    {
        double x_val = end.x - start.x;
        double y_val = end.y - start.y;

        return sqrt(pow(x_val, 2) + pow(y_val, 2));
    }
};

int main()
{
    Point newGraph;

    newGraph.SetStart(0, 0);
    newGraph.SetEnd(1, 1);
    cout << "The distance between two points is " << newGraph.distance() << endl;
}