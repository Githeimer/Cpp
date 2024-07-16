#include <iostream>
#include <cmath>

class Complex
{
private:
    int x; // Real part
    int y; // Imaginary part

public:
    // Constructor
    Complex(int ax = 0, int ay = 0)
    {
        x = ax;
        y = ay;
    }

    // Setter functions
    void setX(int ax)
    {
        x = ax;
    }

    void setY(int ay)
    {
        y = ay;
    }

    // Getter functions
    int getX() const
    {
        return x;
    }

    int getY() const
    {
        return y;
    }

    // Operator overloading for +
    Complex operator+(const Complex &cm) const
    {
        return Complex(x + cm.x, y + cm.y);
    }

    // Operator overloading for -
    Complex operator-(Complex cm)
    {
        return Complex(x - cm.x, y - cm.y);
    }

    // gets the magnitude with normal formula
    float getMagnitude()
    {
        return sqrt(pow(x, 2) + pow(y, 2));
    }

    // compare the complex numbers
    bool operator==(Complex cm)
    {
        if ((*this).getMagnitude() == cm.getMagnitude())
        {
            return 1;
        }
        return 0;
    }

    // greater than
    bool operator>(Complex cm)
    {
        if ((*this).getMagnitude() > cm.getMagnitude())
        {
            return true;
        }
        return false;
    }

    // less than
    bool operator<(Complex cm)
    {
        if ((*this).getMagnitude() < cm.getMagnitude())
        {
            return true;
        }
        return false;
    }

    // multiply with a scalar
    Complex operator*(int a)
    {
        return Complex(x * a, y * a);
    }

    // complex operator += with a scalar
    void operator+=(int a)
    {
        x += a;
        y += a;
    }

    // complex operator += with a Complex Number
    void operator+=(Complex cmp)
    {
        x += cmp.x;
        y += cmp.y;
    }

    // pre increment
    Complex operator++()
    {
        return Complex(++x, ++y);
    }

    // post increment
    Complex operator++(int)
    {
        return Complex(++x, ++y);
    }

    
};

int main()
{

    using std::endl;

    Complex Cmp1; // Default constructor
    Cmp1.setX(3);
    Cmp1.setY(4);

    std::cout << "Updated Complex number: ( " << Cmp1.getX() << " +i" << Cmp1.getY() << " )" << std::endl;

    Complex Cmp2(1, 2); // this is called parameterized constructor

    Complex Cmp3 = Cmp1 + Cmp2;

    std::cout << "Result of addition: ( " << Cmp3.getX() << " +i" << Cmp3.getY() << " )" << std::endl;

    std::cout << "Magnitude : " << Cmp3.getMagnitude() << endl;

    if (Cmp1 == Cmp2)
    {
        std::cout << "Equal" << endl;
    }
    else
    {
        std::cout << "Not equal " << endl;
    }

    int x = 5;
    Complex multiresult = Cmp1 * x;
    std::cout << "Result of multiplication: ( " << multiresult.getX() << " +i" << multiresult.getY() << " )" << std::endl;

    Cmp3 += 10;
    std::cout << "Result of addition: ( " << Cmp3.getX() << " +i" << Cmp3.getY() << " )" << std::endl;

    Cmp3 += Cmp1;
    std::cout << "Result of addition: ( " << Cmp3.getX() << " +i" << Cmp3.getY() << " )" << std::endl;

    Complex preComplex = ++Cmp3;
    std::cout << "Result of addition: ( " << preComplex.getX() << " +i" << preComplex.getY() << " )" << std::endl;

    Complex postComplex = Cmp3++;
    std::cout << "Result of addition: ( " << postComplex.getX() << " +i" << postComplex.getY() << " )" << std::endl;
}
