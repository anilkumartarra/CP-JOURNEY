#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
    node (int x)
    {
        data=x;
        next=NULL;
    }
};
//InsertATBegin
node *InsertATBegin(node *head,int x)
{
    node *temp=new node(x);
    temp->next=head;
    head=temp;
    return head;
}
//InsertATEnd
node *InsertATEnd(node *head,int x)
{
    if(head==NULL)
    {
        return new node(x);
    }
    else
    {
        head->next=InsertATEnd(head->next,x);
    }
    return head;
}
//InsertATPos
node *InsertATPos(node *head,int pos,int x)
{
    if(pos==1)
    {
        return InsertATBegin(head,x);
    }
    else
    {
        node *temp=head;
        for(int i=1;i<pos-1;i++)
        {
            if(temp->next==NULL)
            {
                cout<<"INVALID"<<endl;
                return head;
            }
            else
            {
                temp=temp->next;
            }
        }
        node *nex=temp->next;
        temp->next=new node(x);
        temp->next->next=nex;   
    }
    return head;
}
//Display
void display(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
int main() 
{
    int n;
    cin>>n;
    node *head=NULL;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        head=InsertATEnd(head,k);
    }
    int p;
    cin>>p;
    /*int m;            
    cin>>m;
    head=InsertATPos(head,m,p);*/
    //head=InsertATEnd(head,p);
    //head=InsertATBegin(head,p);
    display(head);
	return 0;
}
