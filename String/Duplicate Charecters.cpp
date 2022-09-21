//duplicate charecters in string and its count
#include <bits/stdc++.h>

using namespace std;

int main() 
{
    string s;
    cin>>s;
    map<char,int>mp;
    for(int i=0;i<s.size();i++)
    {
        mp[s[i]]++;
    }
   
    for(auto it:mp)
    {
        if(it.second>1)
        {
            cout<<it.first<<" "<<it.second<<endl;
        }
    }
  
	// your code goes here
	return 0;
}
