#include <iostream>

int main()
{
    // prompting user for number 1/1.5
    float number;
    std::cout<<"Enter the number from 32 to 126\n";
    std::cin>>number;
    int temp_number = (int)number;
    char opposite_characer = temp_number;
    
    // checking invalidaty of user's input 2/4
    // printing the number and the opposite printable character 1/2
    if(number==0)
        std::cout<<"invalid character/s or zero value \n";
    else if(number!=temp_number)
        std::cout<<"invalid a floating point value\n";
    else if(number>=32 && number<=126)
        std::cout<<"the character for "<<number<<"is"<<opposite_characer<<"\n";
    else
        std::cout<<"invalid number out of the range\n";
    
    return 0;
}
// need improvement 😒 4/10
