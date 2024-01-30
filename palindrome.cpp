#include<iostream>
#include<conio.h>
int main()
{
    int n,rev=0,r;
    std::cout<<"Enter the number: ";
    std::cin>>n;
    int temp=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(rev==temp)
    {
        std::cout<<"The number is a palindrome.";
    }
    else
    {
        std::cout<<"The number is not a palindrome.";
    }
    return 0;
}