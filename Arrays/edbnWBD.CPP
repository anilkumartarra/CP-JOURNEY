/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*map<int,int>m;
    cout<<m[15]<<endl;//0
    cout<<m.size()<<endl;
    m[10]=23;
    m[12]=34;
    cout<<m[12];
    map<int,int>freq;
    freq[10]++;
    freq[10]++;
    freq[10]++;
    freq[10]++;
    freq[10]++;
    cout<<freq[10]<<" "<<freq[4];*/
   /* map<string,int>freq;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(freq[s]==0)
        {
            cout<<"ok";
        }
        else
        {
            cout<<s<<freq[s]<<"\n";
        }
        freq[s]++;
    }
    */
    set<int>s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        s.insert(x);
        
    }
    s.erase(4);
    for(int x:s)
    {
        cout<<x<<" ";
    }
    
 
    return 0;
}
