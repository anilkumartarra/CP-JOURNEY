#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
       int a,b;
       cin>>a>>b;
       //bitwise AND
       cout<<(a&b)<<endl;
       //Bitwise OR
       cout<<(a|b)<<endl;
       //Bitwise XOR
       cout<<(a^b)<<endl;
       //Left shift
       cout<<(a<<1)<<endl;
       //Right Shift
       cout<<(a>>1)<<endl;
       //Bitwise NOT
       cout<<(~b)<<endl;
    }
    return 0;
}
