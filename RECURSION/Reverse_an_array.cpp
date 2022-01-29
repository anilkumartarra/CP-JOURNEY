#include<bits/stdc++.h>
using namespace std;
void reverse_an_array(int a[],int left,int right)
{
    if(left>right)
    {
        return;
    }
    else
    swap(a[left],a[right]);
    reverse_an_array(a,left+1,right-1);
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
   reverse_an_array(a,0,n-1);
   for(int i=0;i<n;i++)
   {
       cout<<a[i]<<" ";
   }
    return 0;
}
