// //duplicate number in an array using frequency
#include <bits/stdc++.h>
using namespace std;

void sortcolors(vector<int>& v)
{
    int low =0;
    int high = v.size()-1;
    int mid =0;
    while(mid<=high)
    {
        switch(v[mid])
        {
            case 0:
                swap(v[low],v[mid]);
                low+=1;
                mid+=1;
                break;
            case 1:
                mid+=1;
                break;
            case 2:
                swap(v[mid],v[high]);
                high-=1;
                break;
            
        }
    }
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
    sortcolors(v);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}

