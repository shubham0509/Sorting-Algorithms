#include<iostream>

using namespace std;

void merge(int A[],int p,int q,int r)
{
    int n1,n2;
    n1=q-p+1;   //for merging 4 elements .. if p=1,r=4,q=(p+r)/2=2... so size of array should be q-p+1
    n2=r-q;
    int L[n1],R[n2];
    for(int i=1 ; i<=n1 ; i++)
        L[i]=A[p+i-1];
    for(int i=1 ; i<=n2 ; i++)
        R[i]=A[q+i];
    int i=1,j=1,k=p;
    while(i<=n1 && j<=n2)
    {
        if(L[i]<=R[j])
        {
            A[k]=L[i];
            i++;
        }
        else
        {
            A[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<=n1)
    {
        A[k]=L[i];
        k++;
        i++;
    }
    while(j<=n2)
    {
        A[k]=R[j];
        k++;
        j++;
    }
}

void mergesort(int A[],int p,int r)
{
    if(p<r)
    {
        int q=(p+r)/2;
        mergesort(A,p,q);
        mergesort(A,q+1,r);
        merge(A,p,q,r);
    }
}

int main()
{
    int n;
    cout<<"Enter the no. of elements:... ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements:.. "<<endl;
    for(int i=1 ; i<=n ; i++)
        cin>>arr[i];
    mergesort(arr,1,n);
    for(int i=1 ; i<=n ; i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    return 0;
}
