#include <bits/stdc++.h>
using namespace std;
vector<int> missingnumber_and_repeating(vector<int>& v,int num)
{
    int n=v.size()+1;
    int n1=num*(num+1)/2;
    int sum=0,k;
    vector<int>ans;
    for(int i=0;i<v.size();i++)
    {
       
        sum+=v[i];
        if(v[i]==v[i+1])
        {
            sum-=v[i];
            k=v[i];
        }
        
    }
    ans.push_back(n1-sum);
    ans.push_back(k);
    
    return ans;
}
int main() 
{
    int a,n;
    cin>>n;
    vector<int>v;
    vector<int>res;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    res=missingnumber_and_repeating(v,n);
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
	// your code goes here
	return 0;
}

//using frequency array 
#include <bits/stdc++.h>
using namespace std;
vector<int> missingnumber_and_repeating(vector<int>& v)
{
    int n=v.size()+1;
    vector<int> subs(n,0);
    vector<int>ans;
    for(int i=0;i<v.size();i++)
    {
        subs[v[i]]++;
    }
    int miss = 0, rep =0;
    for(int i=0;i<v.size();i++)
    {
        if(subs[i]==0)
        {
            miss = i;
        }
        else if(subs[i]>=2)
        {
            rep = i;
        }
    }ans.push_back(miss);
    ans.push_back(rep);
    return ans;
}
int main() 
{
    int a,n;
    cin>>n;
    vector<int>v;
    vector<int>res;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    res=missingnumber_and_repeating(v);
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
	// your code goes here
	return 0;
}




