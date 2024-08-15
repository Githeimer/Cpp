#include <iostream>
using namespace std;

class Parent
{

protected:
    string skincolor;

public:
    Parent() : skincolor("white") {};
    Parent(string colr) : skincolor(colr) {};
};

class Gen1 : public Parent
{
protected:
    int height;

public:
    Gen1() : height(0), Parent() {}
    Gen1(int h, string col) : height(0), Parent(col) {}
};

int main()
{
}