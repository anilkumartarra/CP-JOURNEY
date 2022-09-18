
/* 3) Write a program to print all the LEADERS in the array. An element is a leader if it is greater than all the elements to its right side. And the rightmost element is always a leader. */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x=a[n-1];
    for(int i=n-1;i>=0;i--)
    {
        if(a[i]>=x)
        {
            cout<<a[i]<<" ";
            x=a[i];
        }
    }
}

