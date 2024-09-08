#include <iostream>
using namespace std;

class Date_Format
{
public:
    int year;
    int month;
    int day;

public:
    Date_Format() : year(0), month(0), day(0) {}
    Date_Format(int y, int m, int d) : year(y), month(m), day(d) {}
    Date_Format(const Date_Format &other)
    {
        year = other.year;
        month = other.month;
        day = other.day;
    }

    void setDate(int y, int m, int d)
    {
        year = y;
        month = m;
        day = d;
    }

    void displayAge()
    {
        cout << "AGE:" << year << " years " << month << " months " << day << " days" << endl;
    }

    // use this for age badhaune (question ma op overloading sodheko bhayera) use like age+ next additional time (in y m d)
    Date_Format operator+(const Date_Format &other)
    {
        int days_1 = year * 365 + month * 30 + day;
        int days_2 = other.year * 365 + other.month * 30 + other.day;

        int f_day = days_1 + days_2;

        int n_year = f_day / 365;
        f_day = f_day - n_year * 365;
        int n_month = f_day / 30;
        f_day = f_day - n_month * 30;

        return Date_Format(n_year, n_month, f_day);
    }
    // use like DOB - CUrrent Date
    Date_Format operator-(const Date_Format &other)
    {
        int days_1 = year * 365 + month * 30 + day;
        int days_2 = other.year * 365 + other.month * 30 + other.day;

        int f_day = days_1 - days_2;

        int n_year = f_day / 365;
        f_day = f_day - n_year * 365;
        int n_month = f_day / 30;
        f_day = f_day - n_month * 30;

        return Date_Format(n_year, n_month, f_day);
    }

    friend Date_Format operator-(const Date_Format &first, const Date_Format &second);
    friend Date_Format operator+(const Date_Format &first, const Date_Format &second);
};

Date_Format operator-(const Date_Format &first, const Date_Format &second)
{
    int days_1 = first.year * 365 + first.month * 30 + first.day;
    int days_2 = second.year * 365 + second.month * 30 + second.day;

    int f_day = days_1 + days_2;

    int n_year = f_day / 365;
    f_day = f_day - n_year * 365;
    int n_month = f_day / 30;
    f_day = f_day - n_month * 30;

    return Date_Format(n_year, n_month, f_day);
}
Date_Format operator+(const Date_Format &first, const Date_Format &second)
{
    int days_1 = first.year * 365 + first.month * 30 + first.day;
    int days_2 = second.year * 365 + second.month * 30 + second.day;

    int f_day = days_1 + days_2;

    int n_year = f_day / 365;
    f_day = f_day - n_year * 365;
    int n_month = f_day / 30;
    f_day = f_day - n_month * 30;

    return Date_Format(n_year, n_month, f_day);
}

int main()
{
    Date_Format DOB(2062, 05, 12);
    Date_Format CurrentDate(2081, 05, 19);
    Date_Format AddDate(10, 5, 10); // after this much year;

    Date_Format Age = CurrentDate - DOB;
    Date_Format Future_Age = Age + AddDate;
    Age.displayAge();
    Future_Age.displayAge();
}