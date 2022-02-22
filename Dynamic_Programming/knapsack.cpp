//knapsack
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    return b;
}
int knapsack(int n,int *w,int *p,int m)
{
    int k[n+1][m+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(i==0 or j==0)
            {
                k[i][j]=0;
            }
            else if(j<w[i])
            {
                k[i][j]=k[i-1][j];
            }
            else
            {
                k[i][j]=max(k[i-1][j],p[i]+k[i-1][j-w[i]]);
            }
        }
    }
    return k[n][m];
}

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int w[n+1],p[n+1];
        for(int i=1;i<=n;i++)
        {
            cin>>w[i]>>p[i];
        }
        cout<<knapsack(n,w,p,m)<<endl;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
