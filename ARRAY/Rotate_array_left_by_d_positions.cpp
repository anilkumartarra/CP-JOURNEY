
/* 4) Given an array arr[ ] of size N, the task is to rotate the array by d position to the left.*/

#include<bits/stdc++.h>
using namespace std;
void rotatetoleft(int a[],int n)
{
    int k=a[0];
    for(int i=0;i<n;i++)
    {
        a[i]=a[i+1];
    }
    a[n-1]=k;
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
    int k;
    cin>>k;
    for(int i=0;i<k;i++)
    {
        rotatetoleft(a,n);
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
