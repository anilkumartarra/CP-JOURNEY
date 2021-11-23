//xor of numbers between two number
// xor from l to k
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int XorFrom_l_to_r(int n)
{
    if(n%4==0)
    {
        return n;
    }
    else if(n%4==1)
    {
        return 1;
    }
    else if(n%4==2)
    {
        return n+1;
    }
    else
    {
        return 0;
    }
}
int main() 
{
    int l,r;
    cin>>l>>r;
    int k=XorFrom_l_to_r(l-1)^XorFrom_l_to_r(r);
    cout<<k;
}
