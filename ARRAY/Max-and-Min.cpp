#include <iostream>
using namespace std;
void max_and_min(int a[],int n)
{
    int max=a[0];
    int min=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        else if(a[i]<min)
        {
            min=a[i];
        }
    }
    cout<<max<<" "<<min;
}

int main() 
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    max_and_min(a,n);
	// your code goes here
	return 0;
}
