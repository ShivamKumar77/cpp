#include<iostream>
#include<conio.h>
int main()
{
    int a,b,c;
    cout<<"Enter the first number:";
    cin>>a;
    cout<<"Enter the second number:";
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"The first number is:"<<a;
    cout<<"The second number is:"<<b;
    return 0;   
}
