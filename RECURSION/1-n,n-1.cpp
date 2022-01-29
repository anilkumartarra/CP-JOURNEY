#include<bits/stdc++.h>
using namespace std;
void f_1_to_n(int i,int n)
{
    if(i>n)
    {
        return;
    }
    cout<<i<<endl;
    f_1_to_n(i+1,n);
    
}
void f_n_to_1(int i,int n)
{
    if(i<1)
    {
        return;
    }
    cout<<i<<endl;
    f_n_to_1(i-1,n);
    
}
void BT_1_to_n(int i,int n)
{
    if(i<1)
    {
        return;
    }
    BT_1_to_n(i-1,n);
    cout<<i<<endl;
}
void BT_n_to_1(int i,int n)
{
    if(i>n)
    {
        return;
    }
    BT_n_to_1(i+1,n);
    cout<<i<<endl;
}
int main() 
{
    int n,i;
    cin>>n;
    cout<<"f_1_to_n"<<endl;
    f_1_to_n(1,n);
    cout<<"f_n_to_1"<<endl;
    f_n_to_1(n,n);
    cout<<"BT_1_to_n"<<endl;
    BT_1_to_n(n,n);
    cout<<"BT_n_to_1"<<endl;
    BT_n_to_1(1,n);
    return 0;
}
