#include<bits/stdc++.h>
#include<climits>
using namespace std;
int maxsubarray(int a[],int n)
{
  int max_so_far=0, max_ending_here=0;
  for(int i=0;i<n;i++)
  {
    max_ending_here=max_ending_here+a[i];
    
    if(max_ending_here<0)
    
       max_ending_here=0;
       
    if(max_so_far<max_ending_here)
    
       max_so_far=max_ending_here;
         
  }
   return max_so_far;
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
  cout<<maxsubarray(a,n);
  return 0;
}
