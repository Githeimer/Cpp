#include <iostream>
#include <string>

using namespace std;

// Base class Item
class Item
{
protected:
    int itemNo;
    string name;
    double price;

public:
    Item(int itemNo, const string &name, double price)
        : itemNo(itemNo), name(name), price(price) {}

    void display() const
    {
        cout << "Item No: " << itemNo << endl;
        cout << "Name: " << name << endl;
        cout << "Price: $" << price << endl;
    }

    double getPrice() const
    {
        return price;
    }
};

// Derived class DiscountedItem
class DiscountedItem : public Item
{
private:
    double discountPercent;

public:
    DiscountedItem(int itemNo, const string &name, double price, double discountPercent)
        : Item(itemNo, name, price), discountPercent(discountPercent) {}

    double getPrice() const
    {
        double discountedPrice = price * (1 - discountPercent / 100.0);
        return discountedPrice;
    }

    void display() const
    {
        Item::display();
        cout << "Discount Percent: " << discountPercent << "%" << endl;
        cout << "Discounted Price: $" << getPrice() << endl;
    }
};

int main()
{
    int n;
    cout << "Enter the number of items: ";
    cin >> n;

    Item *items[n]; // Array of pointers to Item objects

    for (int i = 0; i < n; ++i)
    {
        int itemNo;
        string name;
        double price, discountPercent;

        cout << "\nItem " << i + 1 << ":" << endl;
        cout << "Enter Item No: ";
        cin >> itemNo;
        cin.ignore(); // to clear newline from buffer
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Price: $";
        cin >> price;

        // Check if the item is discounted
        cout << "Enter Discount Percent (0 if not discounted): ";
        cin >> discountPercent;

        if (discountPercent > 0)
        {
            items[i] = new DiscountedItem(itemNo, name, price, discountPercent);
        }
        else
        {
            items[i] = new Item(itemNo, name, price);
        }
    }

    // Display bill
    double totalAmount = 0.0;
    cout << "\nBill:\n";
    for (int i = 0; i < n; ++i)
    {
        items[i]->display();
        totalAmount += items[i]->getPrice();
        cout << endl;
    }

    cout << "Total Amount: $" << totalAmount << endl;

    // Free memory allocated to objects
    for (int i = 0; i < n; ++i)
    {
        delete items[i];
    }

    return 0;
}
