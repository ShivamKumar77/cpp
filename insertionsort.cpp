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
    for(int i=1;i<n;i++)
    {
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    std::cout<<"\nElements in sorted order are : \n";
    for(int i=0;i<n;i++)
    {
        std::cout<<arr[i]<<"\t";
    }
    return 0;
}