#include<iostream>

using namespace std;

int main()
{
    int n,flag=0,mid,x;
    cout<<"enter no. of elements:.."<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elements in sorted order :.. "<<endl;
    for(int i=1 ; i<=n ; i++)
        cin>>arr[i];
    cout<<"Enter element for searching:..  ";
    cin>>x;
    int i=1;
    int j=n;
    while(i<=j)
    {
        mid=(i+j)/2;
        if(x==arr[mid])
        {
            cout<<"Yes element found at index "<<mid<<endl;
            flag=1;
            break;
        }
        else if(x<arr[mid])
            j=mid-1;
        else
            i=mid+1;
    }
    if(flag==0)
        cout<<"Element not Found "<<endl;
    return 0;
}
