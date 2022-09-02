#include<bits/stdc++.h>
using namespace std;
void mergetwosortedarrays(int a1[],int a2[],int n,int m)
{
    int i=n-1;
    int j=0;
    while(i>=0 && j<m)
    {
        if(a1[i]>=a2[j])
        {
            swap(a1[i],a2[j]);
            i--;
            j++;
        }
        else
        {
            break;
        }
    }
    sort(a1,a1+n);
    sort(a2,a2+m);
}
int main() 
{
    int n;
    cin>>n;
    int a1[n];
    for(int i=0;i<n;i++)
    {
      cin>>a1[i];
    }
    int m;
    cin>>m;
    int a2[m];
    for(int j=0;j<m;j++)
    {
      cin>>a2[j];
    }
    mergetwosortedarrays(a1,a2,n,m);
    for(int i=0;i<n;i++)
    {
        cout<<a1[i]<<" ";
    }
    for(int j=0;j<m;j++)
    {
        cout<<a2[j]<<" ";
    }
    return 0;
}


//optimized
#include<bits/stdc++.h>
using namespace std;

void mergearrays(int a[],int b[],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]>b[0])
        {
            swap(a[i],b[0]);
            int first = b[0];
            int k;
            for( k=1;k<m && b[k]<first;k++)
            {
                b[k-1]=b[k];
            }
            b[k-1]=first;
        }
    }
}


int main()
{
    int n,m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    mergearrays(a,b,n,m);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<m;i++)
    {
        cout<<b[i]<<" ";
    }
}
