#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n,k=1,c;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            for(int j=1;j<=5;j++)
            {
                cout<<k<<" ";
                k++;
            }
            k=k+4;
            cout<<endl;
        }
        else
        {
            c=k;
            for(int j=1;j<=5;j++)
            {
                cout<<c--<<" ";
            }
            k=c+6;
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
