//stack_using_vector
#include<bits/stdc++.h>
using namespace std;
struct mystack
{
    vector<int>v;
    void push(int x)
    {
        v.push_back(x);
    }
    
    int pop()
    {
        int res = v.back();
        v.pop_back();
        return res;
    }
    int peek()
    {
        
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool isempty()
    {
        return v.empty();
    }
};
int main()
{
    mystack s;
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











