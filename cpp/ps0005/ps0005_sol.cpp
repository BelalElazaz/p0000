#include <iostream>

int main()
{
    // prompting user for 2 operands and an operator 2/2
    double number1,number2,result;
    int result1;
    char op;
   
    std::cout<<"please Enter the 2 oprants\n";
    std::cin>>number1>>number2;

    std::cout<<"please Enter the oprerators\n";
    std::cin>>op;
    
    // checking user inputs and processing 3/4
    // printing the result if all data is valid 0.5/1    
    if(op=='+')
        std::cout<<"(result="<<number1<<"+"<<number2<<")="<<number1+number2;

    else if(op=='-')
        std::cout<<"(result="<<number1<<"-"<<number2<<")="<<number1-number2;

    else if(op=='*')
        std::cout<<"(result="<<number1<<"*"<<number2<<")="<<number1*number2;
    
    else if(op=='/')
    {
        if(number2!=0)
        {
            std::cout<<"(result="<<number1<<"/"<<number2<<")="<<number1/number2;
        }
    } // 0.5/1

    else if(op=='%')
    {
        if(number1!=int(number1) || number2!=int(number2))
        {
            std::cout<<"fail becouse using  floating"<<"\n";
        }
        else
        {
            std::cout<<"(result="<<(int)number1<<"/"<<(int)number2<<")="<<(int)number1%(int)number2;
        }
    } // 0.5/1
    
    else
        std::cout<<"can't excause the operation\n"; // 1/1
    // 1/1

    return 0;
}
// good work 👍 6/10
