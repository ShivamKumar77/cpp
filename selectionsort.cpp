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
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        int temp = arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    std::cout<<"\nElements in sorted order are : \n";
    for(int i=0;i<n;i++)
    {
        std::cout<<arr[i]<<"\t";
    }
    return 0;
}
