#include<iostream>

using namespace std;

int main()
{
    int n,i,j,key;
    cout<<"Enter the no. of elements..."<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements..:"<<endl;
    for(i=0 ; i<n ; i++)
        cin>>arr[i];
    for(i=1 ; i<n ; i++)
    {
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    cout<<"Sorted array....:  ";
    for(i=0 ; i<n ; i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    return 0;
}
