#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << "Equation format : aX^2 + bx +c =0 " << endl;
    cout << "Enter a , b and c" << endl;

    int a, b, c;
    cin >> a >> b >> c;

    double check_var = pow(b, 2) - 4 * a * c;

    if (check_var < 0)
    {
        cout << "Enter a valid equation" << endl;
        return -1;
    }

    double x1, x2;

    x1 = (-b - sqrt(check_var)) / 2 * a;
    x2 = (-b + sqrt(check_var)) / 2 * a;

    cout << "The solutions are:" << endl;
    cout << "X1= " << x1 << " and X2= " << x2 << endl;

    cout << "-----------------------------" << endl;
}