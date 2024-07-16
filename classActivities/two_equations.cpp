#include <iostream>
using namespace std;

void equation_calculator(int, int, int, int, int, int);

int main()
{
    int a, b, m;
    cout << "Equation format : ax+ bx = m " << endl;
    cout << "Enter a , b and m" << endl;
    cin >> a >> b >> m;

    int c, d, n;
    cout << "Equation format : cx+ dx = n " << endl;
    cout << "Enter c , d and n" << endl;
    cin >> c >> d >> n;

    equation_calculator(a, b, m, c, d, n);

    return 0;
}

void equation_calculator(int a, int b, int m, int c, int d, int n)
{
    double temp = (a * d - c * b);
    double x = (m * d - b * n) / temp;
    double y = (n * a - m * c) / temp;

    cout << "The solutions are:" << endl;
    cout << "X1= " << x << " and X2= " << y << endl;

    cout << "-----------------------------" << endl;
}