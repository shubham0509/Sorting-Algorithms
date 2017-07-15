#include<iostream>

using namespace std;

int binary_search(int arr[],int l,int r,int x)
{
    int mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(arr[mid]==x)
            return mid;
        if(arr[mid]>x)
            return binary_search(arr,l,mid-1,x);
        else
            return binary_search(arr,mid+1,l,x);
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter no of elements..: ";
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter a number to be searched.: ";
    int x;
    cin>>x;
    int l=0,r=n-1;
    int ans=binary_search(arr,l,r,x);
    if(ans==-1)
        cout<<"Element not found."<<endl;
    else
        cout<<"Element found at position "<<ans<<"."<<endl;
    return 0;
}
