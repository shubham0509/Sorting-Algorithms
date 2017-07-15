#include<iostream>

using namespace std;

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int n,i,j,index;
    cout<<"Enter no. of elements to be sorted:..\n";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:..."<<endl;
    for(i=0 ; i<n ; i++)
        cin>>arr[i];
    for(i=0 ; i<n-1 ; i++)
    {
        index=i;
        for(j=i+1 ; j<n ; j++)
        {
            if(arr[j]<arr[index])
                index=j;
        }
        swap(&arr[i],&arr[index]);
    }
    cout<<"Sorted array:   ";
    for(i=0 ; i<n ; i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    return 0;
}
