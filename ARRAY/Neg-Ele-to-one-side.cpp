#include<bits/stdc++.h>
using namespace std;
void negativeelements(int a[],int n)
{
  int temp[n];
  int j=0;
  for(int i=0;i<n;i++)
  {
    if(a[i]>=0)
    {
      temp[j]=a[i];
      j++;
    }
  }  
  if(j==n || j==0)
  return;
  for(int i=0;i<n;i++)
  {
    if(a[i]<0)
    {
      temp[j]=a[i];
      j++;
    }
  }
  memcpy(a,temp,sizeof(temp));
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
    negativeelements(a,n);
    for(int i=0;i<n;i++)
    {
      cout<<a[i]<<" ";
    }
    return 0;
}
