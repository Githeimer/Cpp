#include <iostream>
using namespace std;

class Food
{
public:
    string DishName;
    int Price;

    Food() : DishName(""), Price(0) {}

    Food(string a, int p) : DishName(a), Price(p) {}

    // void getFoodInfo() const
    // {
    //     cout << "Name: " << DishName << "\tPrice: " << Price << endl;
    // }
};

class TableInfo
{
public:
    static int c;
    int TableNo;
    Food Menu[5];
    int totalItem;

    TableInfo() : TableNo(++c), totalItem(0) {}

    void setTable()
    {
        cout << "How Many Foods would you like to add (max 5): ";
        cin >> totalItem;

        if (totalItem > 5)
        {
            cout << "Cannot add more than 5 items." << endl;
            totalItem = 5;
        }

        for (int i = 0; i < totalItem; i++)
        {
            string a;
            int p;
            cout << "Food No: " << i + 1 << endl;
            cout << "Food Name: ";
            cin >> a;
            cout << "Price: ";
            cin >> p;
            Menu[i] = Food(a, p);
        }
    }
};

int TableInfo::c = 0;

class BillAmount : public TableInfo
{
public:
    int NetAmt;
    float VAT;
    float ServiceAmt;
    float GrossAmt;

    BillAmount() : NetAmt(0), VAT(0), ServiceAmt(0), GrossAmt(0) {}

    void calculateBill()
    {
        NetAmt = 0;
        for (int i = 0; i < totalItem; i++)
        {
            NetAmt += Menu[i].Price;
        }
        VAT = 0.13 * NetAmt;
        ServiceAmt = 0.10 * NetAmt;
        GrossAmt = NetAmt + VAT + ServiceAmt;
    }

    void DisplayBill()
    {
        cout << "Table Number: " << TableNo << endl;
        cout << "Net Amount: $" << NetAmt << endl;
        cout << "VAT (13%): $" << VAT << endl;
        cout << "Service Charge (10%): $" << ServiceAmt << endl;
        cout << "Gross Amount: $" << GrossAmt << endl;
        cout << "------------------------" << endl;
    }
};

int main()
{
    BillAmount tables[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter details for Table " << (i + 1) << ":" << endl;
        tables[i].setTable();
    }

    for (int i = 0; i < 5; ++i)
    {
        tables[i].calculateBill();
        tables[i].DisplayBill();
    }

    return 0;
}
