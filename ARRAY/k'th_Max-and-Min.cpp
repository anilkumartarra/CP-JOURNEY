#include <bits/stdc++.h>
using namespace std;
void max_and_min(int a[],int n,int k)
{
    sort(a,a+n);
    cout<<a[n-k]<<" "<<a[k-1];
    
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
    max_and_min(a,n,k);
	// your code goes here
	return 0;
}
