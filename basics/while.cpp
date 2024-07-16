#include <iostream>

int main()
{
    using std::cout;
    using std::endl;
    using std::cin;

    std::string name;

    while(name.empty())
    {
        cout<<"Enter your name: ";
        std::getline(cin,name);
        cout<<endl;
    }

    cout<<"Hellow "<<name;


}