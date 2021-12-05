//binary numbers for integers 1 to n
#include<bits/stdc++.h>
using namespace std;
void bin(int n)
{
    if(n>1)
    {
        bin(n/2);
    }
    cout<<n%2;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        bin(i);
        cout<<" ";
    }
}
