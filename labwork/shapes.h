#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
protected:
    int x;
    int y;

public:
    Shape() : x(0), y(0) {}
    Shape(int x, int y) : x(x), y(y) {}
    virtual void draw() = 0; // Pure virtual function
};

class Circle : public Shape
{
protected:
    int radius;

public:
    Circle() : Shape(), radius(0) {}
    Circle(int x, int y, int r) : Shape(x, y), radius(r) {}
    void draw() override;
};

class Ellipse : public Shape
{
protected:
    int xradius;
    int yradius;

public:
    Ellipse() : Shape(), xradius(0), yradius(0) {}
    Ellipse(int x, int y, int xr, int yr) : Shape(x, y), xradius(xr), yradius(yr) {}
    void draw() override;
};

class Rectangle : public Shape
{
protected:
    int x1;
    int y1;

public:
    Rectangle() : Shape(), x1(0), y1(0) {}
    Rectangle(int x, int y, int x1, int y1) : Shape(x, y), x1(x1), y1(y1) {}
    void draw() override;
};

#endif // SHAPE_H
