#include <iostream>
using namespace std;

class Car
{
public:
    string name;
    int mileage;

    Car() : name(""), mileage(0) {}
    Car(string n, int sn) : name(n), mileage(sn) {}

    void setInfo()
    {
        cout << "ENTER CAR NAME:" << endl;
        cin >> name;
        cout << "ENTER MILEAGE OR RANGE" << endl;
        cin >> mileage;
    }

    void displayInfo()
    {
        cout << "CAR: " << name << " gives " << mileage << " km/ltr mileage" << endl;
    }
};

int main()
{
    int n;
    cout << "ENTER HOW MANY CAR DETAILS?" << endl;
    cin >> n;

    Car *c = new Car[n];

    for (int i = 0; i < n; i++)
    {
        c[i].setInfo();
    }

    for (int i = 0; i < n; i++)
    {

        c[i].displayInfo();
    }

    delete c;
    c = nullptr;

    return 0;
}