//stack implementation
#include<bits/stdc++.h>
using namespace std;
struct mystack
{
    int *a;
    int cap;
    int top;
    mystack (int c)
    {
        cap=c;
        a=new int[cap];
        top=-1;
    }
    void push(int x)
    {
        if(top==cap-1)
        {
            cout<<"stack is full"<<" ";
        }
        top++;
        a[top]=x;
    }
    int pop()
    {
        if(top==-1)
        {
            cout<<"stack is empty"<<" ";
        }
        int res = a[top];
        top--;
        return res;
    }
    int peek()
    {
        if(top==-1)
        {
            cout<<"empty stack"<<" ";
        }
        return a[top];
    }
    int size()
    {
        return (top+1);
    }
    bool isempty()
    {
        return (top==-1);
    }
};
int main()
{
    mystack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    cout<<s.pop()<<" ";
    cout<<s.size()<<" ";
    cout<<s.peek()<<" ";
    cout<<s.isempty()<<" ";
    return 0;
}

