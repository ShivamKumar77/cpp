#include<iostream>
#include<conio.h>
int main()
{
    char ch;
    std::cout<<"Enter a character: ";
    std::cin>>ch;
    if(islower(ch))
        std::cout<<"\nThe entered character is lowercase.";
    else if(isupper(ch))
        std::cout<<"\nThe entered character is uppercase.";
    else
        std::cout<<"\nThe entered character is neither lowercase nor uppercase.";
    return 0;
}   
