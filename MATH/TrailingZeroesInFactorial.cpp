//TrailingZeroesInFactorial
#include<bits/stdc++.h>
using namespace std;
int trailingzeroesinfactorial(int n)
{
    int res=0;
    for(int i=5;i<=n;i=i*5)
    {
        res=res + n/i;
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
       cout<<trailingzeroesinfactorial(n)<<endl;
    }
    return 0;
}
