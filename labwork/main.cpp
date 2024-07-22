#include <iostream>
#include "shapes.h"
using namespace std;

void Circle::draw()
{
    cout << "Drawing Circle at (" << x << ", " << y << ") with radius " << radius << endl;
    // Add graphics code here if necessary
}

void Ellipse::draw()
{
    cout << "Drawing Ellipse at (" << x << ", " << y << ") with x-radius " << xradius << " and y-radius " << yradius << endl;
    // Add graphics code here if necessary
}

void Rectangle::draw()
{
    cout << "Drawing Rectangle with top-left corner at (" << x << ", " << y << ") and bottom-right corner at (" << x1 << ", " << y1 << ")" << endl;
    // Add graphics code here if necessary
}

int main()
{
    Shape *shape = nullptr;
    int option, x, y, param1, param2;

    while (true)
    {
        cout << "1. Circle" << endl;
        cout << "2. Ellipse" << endl;
        cout << "3. Rectangle" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your option: ";
        cin >> option;

        if (option == 4)
        {
            break;
        }

        cout << "Enter the position (x y): ";
        cin >> x >> y;

        switch (option)
        {
        case 1:
            cout << "Enter radius: ";
            cin >> param1;
            shape = new Circle(x, y, param1);
            break;
        case 2:
            cout << "Enter x-radius and y-radius: ";
            cin >> param1 >> param2;
            shape = new Ellipse(x, y, param1, param2);
            break;
        case 3:
            cout << "Enter bottom-right corner (x1 y1): ";
            cin >> param1 >> param2;
            shape = new Rectangle(x, y, param1, param2);
            break;
        default:
            cout << "Invalid option!" << endl;
            continue;
        }

        if (shape)
        {
            shape->draw();
            delete shape;
            shape = nullptr;
        }
    }

    return 0;
}
