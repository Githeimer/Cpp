#include <iostream>

class User
{

private:
    double bank_amount;

public:
    std::string name;

protected:
    int bank_account_number;

public:
    User() : bank_amount(0), name(""), bank_account_number(0) {};
    User(double a, std::string b, int c) : bank_amount(a), name(b), bank_account_number(c) {};

    void enterUser(double a, std::string b, int c)
    {
        bank_amount = a;
        name = b;
        bank_account_number = c;
    }

    void displaydata()
    {
        std::cout << "Hello " << name << std::endl;
        std::cout << "Bank Account no: " << bank_account_number << std::endl;
        std::cout << "Amount: " << bank_amount << std::endl;
    }

    ~User() { std::cout << "Memory freed!"; }
};

int main()
{
    User user1;
    user1.enterUser(10000, "himesh", 210690);

    user1.displaydata();

    return 0;
}