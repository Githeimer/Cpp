#include <iostream>

using namespace std;

class EV
{

public:
    string name;
    int range;

    EV() : name(""), range(0) { cout << "Default constructor invoked! " << endl; };

    EV(string n, int x) : name(n), range(x) {};

    void enterData(string n, int x)
    {
        name = n;
        range = x;
    }

    void displaydata()
    {

        cout << "EV Details !" << endl;
        cout << "Car Name: " << name << endl;
        cout << "Range: " << range << endl;
    }
};

int main()
{
    int n;
    cout << "Enter how many Ev details you'll add!" << endl;
    cin >> n;

    EV *cars = new EV[n]; // use dynamic memory allocation like this

    for (int i = 0; i < n; i++)
    {
        cars[i] = EV("Himu", 1000); // access to parameterized constructor like this or else use cars[i].enterdata();
    }

    for (int i = 0; i < n; i++)
    {
        cars[i].displaydata();
    }
}