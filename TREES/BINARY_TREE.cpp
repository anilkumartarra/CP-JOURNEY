//binary tree creation
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
node *createbinarytree(node *root,int i,int n,vector<int>v)
{
    if(i<n)
    {
        root=new node(v[i]);
        root->left=createbinarytree(root->left,2*i+1,n,v);
        root->right=createbinarytree(root->right,2*i+2,n,v);
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
        cout <<root->data<<" ";
        inorder(root->right);
    }
}
void preorder(node *root)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(node *root)
{
    if(root==NULL)
    {
        return;
    }
    else
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}
int main() 
{
    int n; 
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    node *root=createbinarytree(root,0,n,v);
    cout<<"inorder:";
    inorder(root);
    cout<<endl;
    cout<<"preorder:";
    preorder(root);
    cout<<endl;
    cout<<"postorder:";
    postorder(root);
    
    return 0;
}
