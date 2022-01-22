#include <iostream>
using namespace std;
void reversearray(int a[],int start,int end)
{
    while(start<end)
    {
        int temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }
}
void printarray(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main() 
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    reversearray(a,0,n-1);
    printarray(a,n);
	return 0;
}
