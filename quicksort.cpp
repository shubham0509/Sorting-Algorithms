#include<iostream>

using namespace std;

void swapp(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int partitions(int arr[],int l,int r)
{
    int pIndex=l;
    int pivot=arr[r];
    for(int i=l; i<r ; i++)
    {
        if(arr[i]<=pivot)
        {
            swapp(&arr[i],&arr[pIndex]);
            pIndex++;
        }
    }
    swapp(&arr[pIndex],&arr[r]);
    return pIndex;
}

void quicksort(int arr[],int l, int r)
{
    if(l<r)
    {
        int pi=partitions(arr,l,r);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,r);
    }
}

void display(int arr[],int n)
{
    for(int i=0 ; i<n ; i++)
        cout<<arr[i]<<" ";
}

int main()
{
    int n;
    cout<<"Enter the no of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0 ; i<n ; i++)
        cin>>arr[i];
    int l,r;
    l=0;
    r=n-1;
    quicksort(arr,l,r);
    cout<<"Elements in sorted order: ";
    display(arr,n);
    return 0;
}
