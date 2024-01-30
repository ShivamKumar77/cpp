#include<iostream>
#include<conio.h>
 int main()
{
    int n;
    std::cout<<"Enter the number of terms: ";
    std::cin>>n;
    float a=1,b=0,c;
    for(int i=1;i<=n;i++)
    {
        c = a+b;
        std::cout<<c<<"\t";
        a = b;
        b = c;
    }
    return 0;
}
