//height of a binary search tree
#include<bits/stdc++.h>
using namespace std;
struct node 
{
    int data;
    struct node *left;
    struct node *right;
    node (int x)
    {
        data=x;
        left=right=NULL;
    }
};
node *create(node *root,int x)
{
    if(root==NULL)
    {
        return new node(x);
    }
    else if(x<root->data)
    {
        root->left=create(root->left,x);
    }
    else if(x>root->data)
    {
        root->right=create(root->right,x);
    }
    return root;
}
int height(node *root)
{
    if(root==NULL)
    {
        return 0;
    }
    else
    {
        return max(height(root->left),height(root->right))+1;
    }
}
int main()
{
    int n;
    cin>>n;
    node *root=NULL;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        root=create(root,k);
    }
    cout<<height(root);
}
