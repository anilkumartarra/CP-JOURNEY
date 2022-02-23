//GCD
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    int res=min(a,b);
    while(res>0)
    {
        if(a%res == 0 and b%res == 0)
        {
            break;
        }
        res--;
    }
    return res;
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
       int a,b;
       cin>>a>>b;
       cout<<gcd(a,b)<<endl;
    }
    return 0;
}
