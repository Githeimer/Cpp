#include <iostream>
using namespace std;

void display(int num)
{
    cout << "Integer number: " << num << endl;
}

void display(int num, int n)
{
    cout << "Integer number: " << num << "Integer n: " << n << endl;
}

void display()
{
    cout << "Integer" << endl;
}

void display(string name)
{

    cout << "Name: " << name;
}

int main()
{

    display(1, 1);
    display("himesh");

    return 0;
}
