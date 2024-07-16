#include <iostream>

int main()
{
    std::string name;
    std::string address;

     address="banepa";


    std::cout<<"Enter your name"<<std::endl;

    std::getline(std::cin,name);

    name.length(); //returns a int value of string length;

    name.empty(); //returns a boolean value true if string is empty;

    // name.clear(); //clears the string making it empty but has a flaw
    // std::cout<<"THIS IS "<<name[1]<<std::endl; //when accessing a index like this we get an undefined behaviour
   
    name.append("@gmail.com"); //works like a concatination
    name.append("->"+address); 

    std::cout<<"name.at() = "<<name.at(1)<<std::endl; //returns a character at that index;

    name.insert(0,"I am "); //accepts an index as first character and string as second 

    int x= name.find('z'); // returns an index of int type of the position of given char 
    //if a string is sent it shows an warning and gives a garbage value 
    
    std::cout<<name.at(1)<<std::endl; //returns a character at that index;
    

    name.erase(0,3); //removes the char at the index 

    std::cout<<x<<std::endl;
   
    std::cout<<name;

    return 0;
}