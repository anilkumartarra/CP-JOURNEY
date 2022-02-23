#include<bits/stdc++.h>
using namespace std;
//using left shift
/*void Kthbit(int n,int k)
{
    if(n&(1<<(k-1)!=0))
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
}*/
//using right shift
void Kthbit(int n,int k)
{
    if((n>>(k-1)&1)==1)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,k;
       cin>>n>>k;
       Kthbit(n,k);
    }
    return 0;
}
