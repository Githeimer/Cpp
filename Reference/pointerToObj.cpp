#include <iostream>
using namespace std;

class Top
{

public:
    virtual void display() // without using virtual here any pointer to the derived classes or base class object will show this function
    {
        cout << "might not use C++ again!" << endl;
    }
};

class Dev : virtual public Top
{
public:
    void display()
    {
        cout << "might use for DSA" << endl;
    }
};

class Er : virtual public Dev
{
public:
    void display()
    {
        cout << "AI LE KHAIDINXA RE" << endl;
    }
};

int main()
{
    Top *ptr;
    Er user;
    Top users;
    Er *ptr1;
    ptr1 = &user;
    ptr1->display();
    ptr = &users;
    ptr->display();
}