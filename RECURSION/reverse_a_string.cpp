#include<bits/stdc++.h>
using namespace std;
void reverse_a_string(string &s)
{
    for(int i=0;i<s.length()/2;i++)
    {
        swap(s[i],s[s.length()-i-1]);
    }
}
int main() 
{
    string s;
    cin>>s;
    reverse_a_string(s);
    cout<<s;
    return 0;
}
