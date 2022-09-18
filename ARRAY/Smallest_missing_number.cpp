
/* 6)Given a sorted array of n distinct integers where each integer is in the range from 0 to m-1 and m > n. Find the smallest number that is missing from the array.*/

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
    int k;
    cin>>k;
    int p=0;
    for(int i=0;i<k;i++)
    {
        if(abs(a[i]-p)>=1)//a[i]!=p
        {
            cout<<p<<endl;
            break;
        }
        else
        {
            p++;
        }
    }
}




