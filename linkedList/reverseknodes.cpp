#include<iostream.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(val)
    {
        data=val;
        next=NULL;
    }
}
node*  reversek(node* &head,int k)
{
    node* preptr=NULL;
    node* currptr=head;
    node* nextptr;
    int count=0;
    while(currptr!=NULL && count<l)
    {
        nextptr=currptr->next;
        currptr->next=preptr;
        preptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(nextptr!=NULL)
    {
        head->next=reversek(nextptr,k);
    }
    return preptr;
}


void insertAtTail(node* &head,int val)
{
    node* n=new node(val);
    if(head==NULL){
         head=n;
         return;
    }
    node*temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
void display(node* head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertATHead(node* &head,int val)
{
    node* n=new node(val);
    n->next=head;
    head=n;
}
int main()
{
    node* head=NULL;
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,7);
    insertAtTail(head,8);
    int k=2;
    node* newhead=reversek(head,k);
    display(newhead);
    return 0;
}