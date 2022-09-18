/* 1) Given an array A[] and a number x, check for pair in A[] with sum as x */

#include <bits/stdc++.h>
using namespace std;
bool functionk(int n,int a[],int k)
{
    for(int i=0;i<(n-1);i++)
    {
        for(int j=(i+1);j<n;j++)
        {
            if(a[i]+a[j]==k)
            {
                return 1;
            }
        }
    }
    return 0;
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
    if(functionk(n,a,k))
    {
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }
	// your code goes here
	return 0;
}
