#include <iostream>

using namespace std;

class GrandParents
{
public:
    virtual void character()
    {
        cout << "GrandParents are old" << endl;
    }
};

class Father : virtual public GrandParents
{
public:
    void character()
    {
        cout << "Father works hard" << endl;
    }
};

class Mother : virtual public GrandParents
{
public:
    void character()
    {
        cout << "Mom is Goated" << endl;
    }
};

class Me : public Father, public Mother
{
public:
    void character()
    {
        cout << "Me is cool af" << endl;
    }
};

int main()
{
    GrandParents *ptr;
    Me user;
    ptr = &user;
    ptr->character();
}