#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
    node(int x)
    {
        data=x;
        left=right=NULL;
    }
};
node *CreateTree(node *root,int x)
{
    if(root==NULL)
    {
        return new node(x);
    }
    else if(x<root->data)
    {
        root->left=CreateTree(root->left,x);
    }
    else if(x>root->data)
    {
        root->right=CreateTree(root->right,x);
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
        inorder(root->left);
        inorder(root->right);
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
        inorder(root->left);
        inorder(root->right);
        cout<<root->data<<" ";
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
        root=CreateTree(root,k);
    }
    cout<<"inorder:";
    inorder(root);
    cout<<endl;
    cout<<"preorder:";
    preorder(root);
    cout<<endl;
    cout<<"postorder:";
    postorder(root);
}
