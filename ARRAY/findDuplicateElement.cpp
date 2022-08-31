// //duplicate number in an array using frequency
#include <bits/stdc++.h>
using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     int res=*max_element(a,a+n);
//   // cout<<res<<endl;
//   int k =res+1;
//     int b[k];
//     for(int i=0;i<=k;i++)
//     {
//         b[i]=0;
//     }
//     //cout<<b[a[0]];
//     for(int i=0;i<n;i++)
//     {
//         if(b[a[i]]==0)
//         {
//             b[a[i]]=1;
//         }
//         else{
//             b[a[i]]+=1;
//         }
//     }
//     for(int i=0;i<=k;i++)
//     {
//         if(b[i]>=2)
//         {
//             cout<<i<<endl;
//             break;
//         }
//     }
// 	// your code goes here
// 	return 0;
// }



//using map function
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     map<int,int>mp;
//     int ans=-1;
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//         mp[a[i]]+=1;
//         if(mp[a[i]]>=2)
//         {
//             ans=a[i];
//             break;
//         }
//     }
//     cout<<ans<<endl;
// }


//two pointer approach using vector
int findDuplicate(vector<int>& v)
{
    int slow=v[0];
    int fast=v[0];
    do
    {
        slow=v[slow];
        fast=v[v[fast]];
    }while(slow!=fast);
    
    fast=v[0];
    
    while(slow!=fast)
    {
        slow=v[slow];
        fast=v[fast];
    }
    
    return slow;
}

int main()
{
    int n,a;
    cin>>n;
    vector<int> v ;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    cout<<findDuplicate(v);
    //cout<<res<<endl;
}

