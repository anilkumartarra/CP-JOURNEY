#include<bits/stdc++.h>
using namespace std;
void merge(int a[],int p,int q,int r)
{
    int n1=q-p+1;
    int n2=r-q;
    int l[n1],m[n2];
    for(int i=0;i<n1;i++)
    {
        l[i]=a[p+i];
    }
    for(int j=0;j<n2;j++)
    {
        m[j]=a[q+1+j];
    }
    int i=0,j=0,k=p;
    while(i<n1 and j<n2)
    {
        if(l[i]<=m[j])
        {
            a[k]=l[i];
            i++;
        }
        else
        {
            a[k]=m[j];
            j++;
        }
        k++;
    }
    while(i<n1)
    {
        a[k]=l[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        a[k]=m[j];
        j++;
        k++;
    }
    
}
void mergesort(int a[],int l,int r)
{
    if(l<r)
    {
        int m=(l+r)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,r);
        merge(a,l,m,r);
    }
}
int main() 
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    mergesort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
