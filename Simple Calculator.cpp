#include <iostream>

int main()
{
    std::cout<< "***********CALCULATOR***********\n";
    char op;
    double num1;
    double num2;
    double result;
    std::cout<<"Enter either(+ - * /): ";
    std::cin>>op;
    std::cout<<"Enter #1: ";
    std::cin>>num1;
    std::cout<<"Enter #2: ";
    std::cin>>num2;
    switch(op)
    {
        case '+':
        result = num1 + num2;
        std::cout<<"Result: "<<result<<"\n";
        break;

        case '-':
        result = num1 - num2;
        std::cout<<"Result: "<<result<<"\n";
        break;

        case '*':
        result = num1 * num2;
        std::cout<<"Result: "<<result<<"\n";
        break;

        case '/':
        result = num1 / num2;
        std::cout<<"Result: "<<result<<"\n";
        break;

        default:
        std::cout<<"Invalid response.\n";

    }
    std::cout<< "********************************";
    return 0;
}



