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
    quickSort(arr,0,n-1);
    std::cout<<"\nElements in sorted order are : \n";
    for(int i=0;i<n;i++)
    {
        std::cout<<arr[i]<<"\t";
    }
    return 0;
}
void quickSort(int arr[],int low,int high)
{
    if(low<high)
    {
        int pi=partition(arr,low,high);
        quickSort(arr,low,pi-1);
        quickSort(arr,pi+1,high);
    }
}
int partition(int arr[],int low,int high)
{
    int pivot=arr[high];
    int i=low-1;
    for(int j=low;j<=high-1;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    int temp=arr[i+1];
    arr[i+1]=arr[high];
    arr[high]=temp;
    return i+1;
} 