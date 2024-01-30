#include<iostream>
#include<conio.h>
int main()
{
    int n;
    std::cout<<"Enter the number of elements: ";
    std::cin>>n;
    int arr[n];
    std::cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        std::cin>>arr[i];
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    std::cout<<"\nSorted array in ascending order is: \n";
    for(int i=0;i<n;i++)
    {
        std::cout<<arr[i]<<"\t";
    }
    return 0;
}