//CountDigits
#include<bits/stdc++.h>
using namespace std;
int countdigit(int n)
{
    if(n==0)
    {
        return 0;
    }
    return 1+countdigit(n/10);
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       cout<<countdigit(n)<<endl;
    }
    return 0;
}
