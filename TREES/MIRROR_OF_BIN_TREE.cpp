//mirror image of a binary tree
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
node *create(int a[],node *root,int i,int n)
{
    if(i<n)
    {
        node *temp=new node(a[i]);
        root=temp;
        root->left=create(a,root->left,2*i+1,n);
        root->right=create(a,root->right,2*i+2,n);
    }
    return root;
}
void inorder(node *root)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}
void mirror(node *root)
{
    if(root==NULL)
    {
        return ;
    }
    else
    {
        mirror(root->left);
        mirror(root->right);
        node *temp=root->left;
        root->left=root->right;
        root->right=temp;
    }
}
int main()
{
    int n;
    cin>>n;
    node *root=NULL;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    root=create(a,root,0,n);
    inorder(root);
    cout<<endl;
    mirror(root);
    inorder(root);
}
