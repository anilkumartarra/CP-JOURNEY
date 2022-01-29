#include<bits/stdc++.h>
using namespace std;
bool palindrome_or_not(int i,string &s)
{
    if(i>=s.size()/2)
    {
        return true;
    }
    if (s[i]!=s[s.size()-i-1])
        return false;
    return palindrome_or_not(i+1,s);
}
int main() 
{
    string s;
    cin>>s;
    cout<<palindrome_or_not(0,s);
    return 0;
}
