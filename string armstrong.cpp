#include<iostream>
#include<conio.h>
int main()
{
    int n;
    std::cout<<"Enter the number: ";
    std::cin>>n;
    int temp=n;
    int rev=0,r;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(rev==temp)
    {
        std::cout<<"The number is an armstrong number.";
    }
    else
    {
        std::cout<<"The number is not an armstrong number.";
    }
    return 0;
}
