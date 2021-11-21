#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int low,int high,int key)
{
    while(low<=high)
    {
        
        int mid=(low+high)/2;
        if(arr[mid]==key) // if middle element is key
        {
           return mid;
        }
        else if(arr[mid]>key) //if key < middle element
        {
            return binarysearch(arr,low,mid-1,key);
        }
        else  //if key > middle element
        {
            return binarysearch(arr,mid+1,high,key);
        }
    }
    return -1;//if element not found in array
}

int main() 
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int pos=binarysearch(arr,0,n-1,key);
    cout<<pos<<endl;
    return 0;
}
