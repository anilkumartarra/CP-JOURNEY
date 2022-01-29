#include<bits/stdc++.h>
using namespace std;
void recursive_sum_1_to_n(int i,int sum)
{
    if(i<1)
    {
        cout<<sum<<endl;
        return;
    }
    else
    {
        return recursive_sum_1_to_n(i-1,sum+i);
    }
}
int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*factorial(n-1);
    }
}
int main() 
{
   int n;
   cin>>n;
   cout<<"recursive_sum"<<endl;
   recursive_sum_1_to_n(n,0);
   cout<<"factorial_of_n"<<endl;
   cout<<factorial(n);
    return 0;
}
