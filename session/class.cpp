#include <iostream>
using namespace std;

class User
{
public: // data object ko throught direct access
    // private:
    // protected:
    int a;

    void print()
    {
        cout << "Hello World" << endl;
    }
};

int main()
{

    User us;

}