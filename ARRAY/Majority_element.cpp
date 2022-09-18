/* 2) Find the majority element in the array. A majority element in an array A[] of size n is an element that appears more than n/2 times (and hence there is at most one such element) */


#include <bits/stdc++.h>
using namespace std;
#define ump unordered_map<int,int>
//#define vr vector<int>
#define ss second
#define ff first
int main()
{
    int n;
    cin>>n;
    int a[n];
    ump mp;
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    //vr v;
    for(auto i:mp)
    {
        if(i.ss>n/2)
        {
            cout<<i.ff<<" ";
        }
    }
}
