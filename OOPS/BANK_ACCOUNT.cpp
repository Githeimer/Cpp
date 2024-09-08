#include <iostream>
using namespace std;

class Account
{
public:
    string name;
    int Acc_num;
    string Type;
    int balance;

    Account() : name(""), Acc_num(0), Type(""), balance(0) {}
    Account(string n, int acc_num, string t, int b) : name(n), Acc_num(acc_num), Type(t), balance(b) {}

    void withdraw(int amount)
    {
        if (balance >= amount)
        {
            balance -= amount;
            cout << "Withdraw Successful! Current Balance: " << balance;
        }
        else
        {
            cout << "Withdraw error! Insufficient Balance" << endl;
        }
    }

    void setDeposit(int n)
    {
        balance += n;
        cout << "Deposit successful! Current Balance: " << balance << endl;
    }

    void display_info()
    {
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
        cout << "Account Number:" << Acc_num << endl;
        cout << "Account Type:" << Type << endl;
    }
};

class Current : public Account
{
public:
    Current()
    {
        Type = "Current Account";
    }

    Current(string a, int bcc_num, string c, int d) : Account(a, bcc_num, c, d)
    {
        Type = "Current Account";
    }
};

class Deposit : public Account
{

public:
    float interest;
    Deposit()
    {
        Type = "Saving Account";
    }
    Deposit(string a, int bcc_num, string c, int d, float inte) : Account(a, bcc_num, c, d), interest(inte)
    {
        Type = "Saving Account";
    }

    void ComputeInterest()
    {
        float year;
        cout << "Compute interest after how much year: ";
        cin >> year;

        float new_balance = balance + ((balance * year * interest) / 100);
        cout << "After " << year << " years Your Balance will be: " << new_balance << endl;
    }
};

int main()
{
    Deposit User("Himesh Dulal", 12121, "Saving Account", 50000, 15.20);
    User.setDeposit(10000);
    User.ComputeInterest();
}
