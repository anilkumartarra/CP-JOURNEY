#include<bits/stdc++.h>
using namespace std;
void printunion(int a[],int b[],int m,int n)
{
  int i=0,j=0;
  while(i<m && j<n)
  {
    if(a[i]<b[j])
    {
      cout<<a[i++]<<" ";
    }
    else if(b[j]<a[i])
    {
      cout<<b[j++]<<" ";
    }
    else
    {
      cout<<b[j]<<" ";
      j++;
      i++;
    }
  }  
  while(i<m)
  {
    cout<<a[i++]<<" ";
  }
  while(j<n)
  {
    cout<<b[j++]<<" ";
  }
}
void printintersection(int a[],int b[],int m,int n)
{
  int i=0,j=0;
  while(i<m && j<n)
  {
    if(a[i]<b[j])
    {
      i++;
    }
    else if(b[j]<a[i])
    {
      j++;
    }
    else
    {
      cout<<a[i]<<" ";
      i++;
      j++;
    }
  }
}
int main() 
{
    int m;
    cin>>m;
    int a[m];
    for(int i=0;i<m;i++)
    {
      cin>>a[i];
    }
    int n;
    cin>>n;
    int b[n];
    for(int j=0;j<n;j++)
    {
      cin>>b[j];
    }
    printunion(a,b,m,n);
    cout<<endl;
    printintersection(a,b,m,n);
    return 0;
}
