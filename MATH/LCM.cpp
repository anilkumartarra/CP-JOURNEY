//LCM
#include<bits/stdc++.h>
using namespace std;
int lcm(int a,int b)
{
    int res=max(a,b);
    while(true)
    {
        if(res%a == 0 and res%b == 0)
        {
            return res;
        }
        res++;
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
       cout<<lcm(a,b)<<endl;
    }
    return 0;
}
