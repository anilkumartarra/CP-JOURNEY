#include<bits/stdc++.h>
using namespace std;
int findoddoccuring(int a[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        res=res^a[i];
    }
    return res;
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int a[n];
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
       }
       cout<<findoddoccuring(a,n)<<endl;
    }
    return 0;
}
