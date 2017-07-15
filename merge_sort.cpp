#include<iostream>

#define sentinel 10000

using namespace std;

void merge(int A[],int p,int q,int r)
{
    int n1,n2;
    n1=q-p+1;
    n2=r-q;
    int L[n1+1],R[n2+1];
    for(int i=1 ; i<=n1 ; i++)
        L[i]=A[p+i-1];
    for(int i=1 ; i<=n2 ; i++)
        R[i]=A[q+i];
    L[n1+1]=sentinel;
    R[n2+1]=sentinel;
    int i=1,j=1,k;
    for(k=p ; k<=r ; k++)
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
    int n,i;
    cout<<"Enter the no. of elements:..  ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements:.."<<endl;
    for(i=1 ; i<=n ; i++)
        cin>>arr[i];
    int p=1,r=n;
    mergesort(arr,p,r);
    for(i=1 ; i<=n ; i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    return 0;
}
