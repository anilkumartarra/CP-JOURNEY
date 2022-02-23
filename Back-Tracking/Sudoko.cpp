#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[9][9],f=0;
        for(int i=0;i<9;i++)
        {
            int sum=0;
            for(int j=0;j<9;j++)
            {
                cin>>a[i][j];
                sum+=a[i][j];
            }
            if(sum!=45)
            {
                f=1;
            }
        }
        for(int i=0;i<9;i++)
        {
            int sum=0;
            for(int j=0;j<9;j++)
            {
                sum+=a[j][i];
            }
            if(sum!=45)
            {
                f=1;
            }
        }
        for(int i=0;i<9;i=i+3)
        {
           int sum=0;
            for(int j=0;j<9;j=j+3)
            {
                sum=a[i][j]+a[i][j+1]+a[i+1][j]+a[i][j+2]+a[i+1][j+1]+a[i+1][j+2]+a[i+2][j+2]+a[i+2][j+1]+a[i+2][j];
            }
            if(sum!=45)
            {
                f=1;
            }
        }
        if(f==0)
        {
            cout<<"Valid"<<endl;
        }
        else
        {
            cout<<"inValid"<<endl;
        }
    }
    return 0;
}
