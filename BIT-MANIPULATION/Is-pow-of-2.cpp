#include<bits/stdc++.h>
using namespace std;
bool ispow2(int n)
{
    if(n==0)
    {
        return false;
    }
    else
    {
        return ((n&(n-1))==0);
    }
}
/*bool ispow2(int n)
{
    if(n==0)
    {
        return false;
    }
    else
    {
        while(n!=1)
        {
            if(n%2!=0)
            {
                return false;
            }
            n=n/2;
        }
    }
    return true;
}*/
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       cout<<ispow2(n)<<endl;
    }
    return 0;
}
