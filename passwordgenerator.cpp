#include<iostream>
#include<conio.h>
int main()
{
    int n;
    std::cout<<"Enter the number of characters: ";
    std::cin>>n;
    char arr[n];
    for(int i=0;i<n;i++)
    {
        arr[i]=65+rand()%26;
        std::cout<<arr[i];
    }
    return 0;
}
               