#include <iostream>

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int al = 0, int ab = 0)
    {
        length = al;
        breadth = ab;

        std::cout << "Rectangle initialized with length: " << length << " and breadth: " << breadth << std::endl;
    }

    void setSize(int al, int ab)
    {
        length = al;
        breadth = ab;

        std::cout << "Rectangle re-initialized with length: " << length << " and breadth: " << breadth << std::endl;
    }

    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        return 2 * (length + breadth);
    }

    ~Rectangle()
    {
        std::cout << "all memory released \n";
    }
};

int main()
{
    Rectangle newRect(1, 2);

    newRect.setSize(2, 4);

    std::cout << "Area of Rectangle is: " << newRect.area() << std::endl;

    std::cout << "Perimeter of Rectangle is: " << newRect.perimeter() << std::endl;
}