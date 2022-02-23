//prime or not
#include<bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    if(n==1)
    {
        return false;
    }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       cout<<prime(n)<<endl;
    }
    return 0;
}
