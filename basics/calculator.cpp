#include <iostream>
#include <cmath>

int main()
{
    char op;
    double num1;
    double num2;
    double result;

    program:{
        std::cout<<"*******************CALCULATOR***************************"<<std::endl;

    std::cout<<"ENTER either( + - * / )"<<std::endl;
    std::cin>>op;

    std::cout<<"ENTER TWO NUMBERS"<<std::endl;
    std::cin>>num1>>num2;

    }
    
    switch (op)
    {
        case '+':
            result = num1+num2;
            std::cout<<"RESULT: "<<result<<std::endl;
            break;
        case '-':
            result=num1-num2;
            std::cout<<"RESULT: "<<result<<std::endl;
            break;
        case '*':
            result=num1*num2;
             std::cout<<"RESULT: "<<result<<std::endl;
            break;
        case '/':
            result=num1/num2;
             std::cout<<"RESULT: "<<result<<std::endl;
            break;
        default:
            std::cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<std::endl;
            std::cout<<"ERROR: Enter a valid input"<<std::endl;
             std::cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!"<<std::endl;
            goto program;
    }

     std::cout<<"*******************CALCULATOR***************************"<<std::endl;

    return 0;
}