//Palindrome
#include<bits/stdc++.h>
using namespace std;
bool palindrome(int n)
{
    int rev=0;
    int temp=n;
    while(temp!=0)
    {
        int l=temp%10;
        rev=rev*10+l;
        temp=temp/10;
    }
    if(rev==n)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       cout<<palindrome(n)<<endl;
    }
    return 0;
}
